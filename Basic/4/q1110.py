# https://www.acmicpc.net/problem/1110

import sys

def new_number(n):
    sum_n = ((n // 10) + (n % 10))
    if sum_n >= 10:
        sum_n = sum_n % 10
    n = (n % 10) * 10 + sum_n
    return n

n = int(sys.stdin.readline().rstrip())
m = n
cycle = 0

while True:
    m = new_number(m)
    cycle += 1
    if n == m:
        print(cycle)
        break
        
# 처음 풀었던 방법
# 별로 좋지 않은듯
'''
import sys

n = sys.stdin.readline().rstrip()
temp_n = n
n_sum = 0
count = 0

while True:
    if int(n) == temp_n:
        print(count)
        break
    else:
        n_sum = 0

        for i in str(temp_n):
            n_sum = n_sum + int(i)
            temp_i = i
        if n_sum >= 10:
            temp_n = int(temp_i + str(n_sum)[1])
        else:
            temp_n = int(temp_i + str(n_sum)[0])
        count = count + 1
'''
