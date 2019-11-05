# https://www.acmicpc.net/problem/2920
# 음계

import sys

scale = list(map(int, sys.stdin.readline().split()))

if scale == sorted(scale):
    print("ascending")
elif scale == sorted(scale, reverse=True):
    print("descending")
else:
    print("mixed")
