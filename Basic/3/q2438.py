# https://www.acmicpc.net/problem/2438

import sys

n = int(sys.stdin.readline().rstrip())

# 방법 1)
for i in range(1, n + 1):
    print("*" * i)

# 방법 2)
for i in range(1, n + 1):
    for j in range(i):
        print("*", end='')
    print()