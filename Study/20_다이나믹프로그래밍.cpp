// ����: http://blog.naver.com/ndb796/221233570962
// ���̳��� ���α׷���(Dynamic Programming - DP)
// ���̳��� ���α׷��� ��� ����
// 1. ū ������ ���� ������ ���� �� �ִ�.
// 2. ���� �������� ���� ������ �װ��� �����ϴ� ū ���������� �����ϴ�. 

#include <stdio.h>

// �Ǻ���ġ ����
int d[100]; // �ʱⰪ�� 0�� 

int dp(int x) {
	if(x == 1) return 1;
	if(x == 2) return 1;
	if(d[x] != 0) return d[x]; 
	return d[x] = dp(x - 1) + dp(x - 2); // ���� �� ������ d[x]�� ���� 
}

int main(void) {
	printf("%d", dp(30));
}
