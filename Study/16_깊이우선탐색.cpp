// 참고: http://blog.naver.com/ndb796/221230945092
// 깊이 우선 탐색(Depth First Search - DFS)

#include <iostream>
#include <vector>

using namespace std;

int number = 7;
int c[7]; // 방문 처리를 위한 배열
vector<int> a[8];
 
void dfs(int x) {
	if(c[x]) return; // 방문했다면 끝냄 
	c[x] = true; // 처음 방문한 것은 방문 처리 
	cout << x << ' '; // 그 노드 출력
	// 인접 노드 하나씩 방문 
	for(int i = 0; i < a[x].size(); i++) {
		int y = a[x][i];
		dfs(y); // 재귀 함수를 이용 
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
	
	dfs(1);
	
	return 0;
}
