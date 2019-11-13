// 참고: http://blog.naver.com/ndb796/221233570962
// 다이나믹 프로그래밍(Dynamic Programming - DP)
// 다이나믹 프로그래밍 사용 가정
// 1. 큰 문제를 작은 문제로 나눌 수 있다.
// 2. 작은 문제에서 구한 정답은 그것을 포함하는 큰 문제에서도 동일하다. 

#include <stdio.h>

// 피보나치 수열
int d[100]; // 초기값은 0임 

int dp(int x) {
	if(x == 1) return 1;
	if(x == 2) return 1;
	if(d[x] != 0) return d[x]; 
	return d[x] = dp(x - 1) + dp(x - 2); // 구한 적 없으면 d[x]에 넣음 
}

int main(void) {
	printf("%d", dp(30));
}
