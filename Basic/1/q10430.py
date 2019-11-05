# https://www.acmicpc.net/problem/10430

x = input().split(' ')
a = int(x[0])
b = int(x[1])
c = int(x[2])

print((a + b) % c)
print((a % c + b % c) % c)
print((a * b) % c)
print((a % c * b % c) % c)