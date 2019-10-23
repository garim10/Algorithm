# https://www.acmicpc.net/problem/10818
# 최대, 최소

import sys

def max_number(list):
    max_n = -1000000
    for i in list:
        if max_n < i:
            max_n = i
    return max_n

def min_number(list):
    min_n = 1000000
    for i in list:
        if min_n > i:
            min_n = i
    return min_n

n = int(sys.stdin.readline().rstrip())
n_list = list(map(int, sys.stdin.readline().split()))

print(min_number(n_list), max_number(n_list))