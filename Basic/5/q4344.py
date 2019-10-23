# https://www.acmicpc.net/problem/4344
# BOJ 4344번
# 평균은 넘겠지

def get_percentage(s_list):
    mean = sum(s_list) / len(s_list)
    count = 0
    for i in s_list:
        if i > mean:
            count += 1
    p = count / len(s_list) * 100
    return p


import sys

c = int(sys.stdin.readline().rstrip())

for i in range(c):
    all_list = list(map(int, sys.stdin.readline().split()))
    score_list = all_list[1:] # 맨 앞은 학생 수이므로 제외 시킴
    percentage = get_percentage(score_list)
    print("%.3f%%" % percentage)