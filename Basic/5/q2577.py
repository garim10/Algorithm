# https://www.acmicpc.net/problem/2577
# 숫자의 개수

import sys
a = int(sys.stdin.readline().rstrip())
b = int(sys.stdin.readline().rstrip())
c = int(sys.stdin.readline().rstrip())
p = str(a * b * c)

for i in range(0, 10):
    count = 0
    for j in p:
        if i == int(j):
            count += 1
    print(count)