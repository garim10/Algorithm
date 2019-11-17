// 참고: http://blog.naver.com/ndb796/221233586932
// 다이나믹 프로그래밍 타일링 문제 
// https://www.acmicpc.net/problem/2133
// 타일 채우기

#include <stdio.h>

int d[1001];

int dp(int x) {
	if(x == 0) return 1;
	if(x == 1) return 0;
	if(x == 2) return 3;
	if(d[x] != 0) return d[x];
	int result = 3 * dp(x - 2);
	for(int i = 3; i <= x; i++) {
		if(i % 2 == 0) {
			result += 2 * dp(x - i);
		}
	}
	return d[x] = result;
}

int main(void) {
	int x;
	scanf("%d", &x);
	printf("%d", dp(x));
}
