# https://www.acmicpc.net/problem/1546
# BOJ 1546번
# 평균

import sys

n = sys.stdin.readline().rstrip()
score = list(map(int, sys.stdin.readline().split()))

max_score = max(score)
change_score = []

for i in score:
    change_score.append(i / max_score * 100)

avg = sum(change_score) / len(change_score)
print(avg)