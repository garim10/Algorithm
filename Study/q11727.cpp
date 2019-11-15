// 참고: http://blog.naver.com/ndb796/221233586932
// 다이나믹 타일링 문제
// https://www.acmicpc.net/problem/11727
// 2xn 타일링2
// 점화식: d[n] = d[n-1] + 2 x d[n-2]

#include <stdio.h>

int d[1001];
int dp(int x) {
	if(x == 1) return 1;
	if(x == 2) return 3;
	if(d[x] != 0) return d[x];
	return d[x] = (dp(x - 1) + 2 * dp(x - 2)) % 10007;
	// 10007로 나눈 이유: 오버플로 생길까봐(문제에서 제시해주었음)
}

int main(void) {
	int x;
	scanf("%d", &x);
	printf("%d", dp(x));
} 
