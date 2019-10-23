# https://www.acmicpc.net/problem/3052
# 나머지

import sys

r_list = []
c_list = []

for i in range(10):
    r_list.append(int(sys.stdin.readline().rstrip()) % 42)

# set(리스트) : 중복을 제거해줌
remove_list = list(set(r_list))
print(len(remove_list))
