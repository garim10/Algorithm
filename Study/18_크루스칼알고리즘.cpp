// 참고:  http://blog.naver.com/ndb796/221230994142
// 크루스칼 알고리즘(Kruskal Algorithm)
// 가장 적은 비용으로 모든 노드를 연결하기 위해 사용하는 알고리즘
// 최소 비용 신장 트리를 만들기 위한 대표적인 알고리즘

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

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
	else return 0;
}

// 간선 클래스 선언
class Edge {
public:
	int node[2]; // 서로 연결된 두 개의 노드 정보
	int distance; // 비용 정보
	// 세 가지 정보를 입력 받아서 초기화할 수 있도록 생성자 함수 생성
	Edge(int a, int b, int distance) {
		this->node[0] = a;
		this->node[1] = b;
		this->distance = distance;
	}
	bool operator <(Edge &edge) {
		return this->distance < edge.distance; // 정렬은 거리가 작은 순으로 
	} 
};
 
int main(void) {
	int n = 7; // 노드의 수 
	int m = 11;  // 간선의 수
	
	vector<Edge> v;
	v.push_back(Edge(1, 7, 12)); // 1과 7이 12라는 비용을 가진 간선으로 연결되어 있음 
	v.push_back(Edge(1, 4, 28));  
	v.push_back(Edge(1, 2, 67));  
	v.push_back(Edge(1, 5, 17));  
	v.push_back(Edge(2, 4, 24));  
	v.push_back(Edge(2, 5, 62));  
	v.push_back(Edge(3, 5, 20));  
	v.push_back(Edge(3, 6, 37));  
	v.push_back(Edge(4, 7, 13));  
	v.push_back(Edge(5, 6, 45));  
	v.push_back(Edge(5, 7, 73));
	
	// 간선의 비용을 기준으로 오름차순 정렬
	sort(v.begin(), v.end());
	
	// 각 정점이 포함된 그래프가 어디인지 저장
	int parent[n];
	for(int i = 0; i < n; i++) {
		parent[i] = i;
	}
	
	int sum = 0;
	for(int i = 0; i < v.size(); i++) {
		// 사이클이 발생하지 않는 경우 그래프에 포함
		// 벡터는 1부터 시작하지만 parent는 배열이기 때문에 index가 0부터 시작하니 1 빼줌
		if(!findParent(parent, v[i].node[0] - 1, v[i].node[1] - 1)) {
			sum += v[i].distance;
			unionParent(parent, v[i].node[0] - 1, v[i].node[1] - 1);
		}
	}
	
	printf("%d\n", sum);
	
	return 0;
}
