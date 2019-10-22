# https://www.acmicpc.net/problem/10871

import sys

n, x = map(int, sys.stdin.readline().split())
n_list = map(int, sys.stdin.readline().split())

for i in n_list:
    if i < x:
        print(i, end=' ')