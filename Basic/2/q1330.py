# https://www.acmicpc.net/problem/1330

x = input().split(' ')
a = int(x[0])
b = int(x[1])

if a > b:
    print(">")
elif a < b:
    print("<")
else:
    print("==")