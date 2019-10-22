# https://www.acmicpc.net/problem/2884

time = input().split(' ')
hour = int(time[0])
minute = int(time[1])

if minute - 45 < 0:
        hour = hour - 1
        minute = 60 + minute - 45
else:
    minute -= 45

if hour < 0:
    hour = 23

print(hour, minute)