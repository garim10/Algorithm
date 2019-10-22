# https://www.acmicpc.net/problem/2588

a = int(input())
b = input()
x = int(b[2])
y = int(b[1])
z = int(b[0])

print(a * x)
print(a * y)
print(a * z)
print(a * x + a * y * 10 + a * z * 100)