# https://www.acmicpc.net/problem/15596
# BOJ 15596번
# 정수 N개의 합

def solve(a):
    ans = 0
    for i in a:
        ans += i
    return ans

a = [2, 4, 10, 32, 15, 311, 65]
print(solve(a))