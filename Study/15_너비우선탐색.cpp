// 참고: http://blog.naver.com/ndb796/221230944729
// 너비 우선 탐색(Breadth First Search)
// '최단 경로'를 찾아준다는 점에서 최단 길이를 보장해야 할 때 많이 사용

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int number = 7;
int c[8]; // 방문 처리를 위한 배열 생성
vector<int> a[8];

void bfs(int start) {
	queue<int> q;
	q.push(start);
	c[start] = true; // 방문 처리 
	while(!q.empty()) {
		int x = q.front();
		q.pop();
		printf("%d ", x);
		// 현재 q에서 꺼낸 그 원소와 인접한 것들을 하나씩 방문 
		for(int i = 0; i < a[x].size(); i++) { 
			int y = a[x][i];
			// 방문을 한 상태라면 무시, 방문을 하지 않은 상태면 q에 담아줌 
			if(!c[y]) {
				q.push(y);
				c[y] = true;
			}
		} 
	}
}

int main(void) {
	// 인접 노드 연결 
	// 1과 2를 연결합니다. 
	a[1].push_back(2);
	a[2].push_back(1);
	// 1과 3을 연결합니다. 
	a[1].push_back(3);
	a[3].push_back(1);
	// 2와 3을 연결합니다. 
	a[2].push_back(3);
	a[3].push_back(2);
	// 2와 4를 연결합니다. 
	a[2].push_back(4);
	a[4].push_back(2);
	// 2와 5를 연결합니다. 
	a[2].push_back(5);
	a[5].push_back(2);
	// 3과 6을 연결합니다. 
	a[3].push_back(6);
	a[6].push_back(3);
	// 3과 7을 연결합니다.
	a[3].push_back(7);
	a[7].push_back(3); 
	// 4와 5를 연결합니다.
	a[4].push_back(5);
	a[5].push_back(4);
	// 6과 7을 연결합니다.
	a[6].push_back(7);
	a[7].push_back(6);
	
	bfs(1);
	
	return 0;
}

