# https://www.acmicpc.net/problem/4673
# BOJ 4673번
# 셀프 넘버

def d(n):
    result = n
    for i in str(n):
        result += int(i)
    return result

not_self = []
# 10000까지 차례대로 돌려서 포함 여부 확인
for i in range(1, 10001):
    m = d(i)
    # 셀프 넘버가 아닌 것은 따로 리스트 만듦
    if m <= 10000:
        not_self.append(m)
    # 셀프 넘버가 아닌 리스트에 i가 있는지 확인한 후, 없으면 출력
    if i not in not_self:
        print(i)