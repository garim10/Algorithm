# https://www.acmicpc.net/problem/10951
# 입력의 끝이 없을 때

import sys

while True:
    try:
        a, b = map(int, sys.stdin.readline().split())
        print(a + b)
    except:
        break