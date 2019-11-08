// 참고: http://blog.naver.com/ndb796/221227975229
// C++ STL sort() 함수 다루기

#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
	return a > b; // a가 b보다 작으면 True 값 반환
} 				  // a < b: 오름차순, a > b: 내림차

int main(void) {
	int a[10] = {9, 3, 5, 4, 1, 10, 8, 6, 7, 2};
	sort(a, a + 10, compare); // sort(변수의 이름, 변수의 이름 + 개수) 
	for(int i = 0; i < 10; i++) {
		cout << a[i] << ' ';
	} 
}
