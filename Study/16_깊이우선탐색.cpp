// ����: http://blog.naver.com/ndb796/221230945092
// ���� �켱 Ž��(Depth First Search - DFS)

#include <iostream>
#include <vector>

using namespace std;

int number = 7;
int c[7]; // �湮 ó���� ���� �迭
vector<int> a[8];
 
void dfs(int x) {
	if(c[x]) return; // �湮�ߴٸ� ���� 
	c[x] = true; // ó�� �湮�� ���� �湮 ó�� 
	cout << x << ' '; // �� ��� ���
	// ���� ��� �ϳ��� �湮 
	for(int i = 0; i < a[x].size(); i++) {
		int y = a[x][i];
		dfs(y); // ��� �Լ��� �̿� 
	}
}

int main(void) {
	// ���� ��� ���� 
	// 1�� 2�� �����մϴ�. 
	a[1].push_back(2);
	a[2].push_back(1);
	// 1�� 3�� �����մϴ�. 
	a[1].push_back(3);
	a[3].push_back(1);
	// 2�� 3�� �����մϴ�. 
	a[2].push_back(3);
	a[3].push_back(2);
	// 2�� 4�� �����մϴ�. 
	a[2].push_back(4);
	a[4].push_back(2);
	// 2�� 5�� �����մϴ�. 
	a[2].push_back(5);
	a[5].push_back(2);
	// 3�� 6�� �����մϴ�. 
	a[3].push_back(6);
	a[6].push_back(3);
	// 3�� 7�� �����մϴ�.
	a[3].push_back(7);
	a[7].push_back(3); 
	// 4�� 5�� �����մϴ�.
	a[4].push_back(5);
	a[5].push_back(4);
	// 6�� 7�� �����մϴ�.
	a[6].push_back(7);
	a[7].push_back(6);
	
	dfs(1);
	
	return 0;
}
