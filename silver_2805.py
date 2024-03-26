import sys

N, M = map(int, sys.stdin.readline().split())
lst = list(map(int, sys.stdin.readline().split()))
lst.sort()

low = 0
high = lst[len(lst)-1]
max = 0

while low <= high:
    total = 0
    mid = (low + high) // 2
    for h in lst:
        if h > mid:
            total += h - mid
    if total >= M:
        max = mid
        low = mid + 1
    else:
        high = mid - 1

print(max)

