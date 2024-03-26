import sys

N = int(sys.stdin.readline())
req = list(map(int, sys.stdin.readline().split()))
M = int(sys.stdin.readline())
req.sort()

low = 0
high = req[-1]
max = 0

while low <= high:
    mid = (low + high) // 2
    total = 0
    for r in req:
        total += min(r, mid)
    if total <= M:
        max = mid
        low = mid + 1
    else:
        high = mid - 1
print(max)