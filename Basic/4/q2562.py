# https://www.acmicpc.net/problem/2562
# 최댓값
# 리스트에서 특정 인덱스 찾기
# list.index("~")

import sys
my_list = []

for i in range(9):
    my_list.append(int(sys.stdin.readline().rstrip()))

max_number = max(my_list)
print(max_number)
print(my_list.index(max_number) + 1)