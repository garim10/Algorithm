# https://www.acmicpc.net/problem/2439

import sys

n = int(sys.stdin.readline().rstrip())

for i in range(1, n + 1):
    print(" " * (n-i), end='')
    print("*" * i)

# 한 줄에 쓰기 
for i in range(1, n + 1):
    print(" " * (n - i) + "*" * i)
