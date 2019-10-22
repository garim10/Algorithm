# https://www.acmicpc.net/problem/10817

# x = list(map(int, input().split())) # 이것도 가능
list = input().split(' ')
x = [int(i) for i in list]
x.sort()
print(x[1])