# https://www.acmicpc.net/problem/15552

# input()은 시간이 많이 걸리므로 sys.stdin.readline()을 이용하였다.
# 맨 끝의 개행문자를 제외하고 문자열만 저장하고 싶었기에 .rstrip()을 추가했다.

import sys

t = int(sys.stdin.readline().rstrip())

for i in range(t):
    a, b = map(int, sys.stdin.readline().split())
    print(a + b)