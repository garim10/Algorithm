# https://www.acmicpc.net/problem/8958
# BOJ 8958번
# OX 퀴즈

def get_score(OX):
    s = 0 # 각각의 점수
    sum_s = 0 # 점수의 합
    for i in OX:
        if i == 'X':
            s = 0
            continue
        else:
            s += 1
            sum_s = sum_s + s
    return sum_s


import sys

n = int(sys.stdin.readline().rstrip())

for i in range(n):
    OX = sys.stdin.readline().rstrip()
    print(get_score(OX))