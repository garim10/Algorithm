// 참고: http://blog.naver.com/ndb796/221230937978
// 스택(Stack)

#include <iostream>
#include <stack>

using namespace std;

int main(void) {
	stack<int> s;
	s.push(7);
	s.push(5);
	s.push(4);
	s.pop();
	s.push(6);
	s.pop();
	while(!s.empty()) {
		cout << s.top() << ' '; // 가장 위쪽에 있는 데이터 출력 
		s.pop(); // 출력 이후에 해당 데이터를 꺼냄
	}
	
	return 0;
}
