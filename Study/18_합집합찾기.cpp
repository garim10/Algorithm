// 참고: http://blog.naver.com/ndb796/221230967614
// 합집합 찾기(Union-Find)
// 서로소 집합(Disjoint-Set) 알고리즘이라고도 불림
// 여러 개의 노드가 존재할 때, 두 개의 노드를 선택해서
// 현재 이 두 노드가 서로 같은 그래프에 속하는지 판별하는 알고리즘

#include <stdio.h>

// 부모 노드를 찾는 함수 
int getParent(int parent[], int x) {
	if(parent[x] == x) return x; // 재귀함수의 종료 부분
	// 만일 같지 않다면... 재귀함수 
	return parent[x] = getParent(parent, parent[x]);
}

// 두 부모 노드를 합치는 함수
int unionParent(int parent[], int a, int b) {
	a = getParent(parent, a);
	b = getParent(parent, b);
	// 더 작은 값으로 합침
	if(a < b) parent[b] = a;
	else parent[a] = b;
}

// 같은 부모를 가지는지 확인
int findParent(int parent[], int a, int b) {
	a = getParent(parent, a);
	b = getParent(parent, b);
	
	if(a == b) return 1;
	return 0;
}

int main(void) {
	int parent[11];
	for(int i = 1; i <= 10; i++) {
		parent[i] = i;
	}
	// 1-2-3-4와 5-6-7-8 두 가지 그래프로 나눔 
	unionParent(parent, 1, 2);
	unionParent(parent, 2, 3);
	unionParent(parent, 3, 4);
	unionParent(parent, 5, 6);
	unionParent(parent, 6, 7);
	unionParent(parent, 7, 8);
	
	printf("1과 5는 연결되어 있나요? %d\n", findParent(parent, 1, 5));
	unionParent(parent, 1, 5);
	printf("1과 5는 연결되어 있나요? %d\n", findParent(parent, 1, 5));
	
	return 0;
}
