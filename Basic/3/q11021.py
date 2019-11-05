# https://www.acmicpc.net/problem/11021

import sys

t = int(sys.stdin.readline().rstrip())

for i in range(t):
    a, b = map(int, sys.stdin.readline().split())
    print("Case #%d: %d" %(i + 1, a + b))