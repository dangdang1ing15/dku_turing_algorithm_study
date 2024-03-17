import sys
for i in range(3):
    N = int(sys.stdin.readline())
    S = []
    for j in range(N):
        a = int(sys.stdin.readline())
        S.append(a)
    sum_S = sum(S)
    if sum_S > 0:
        print("+")
    elif sum_S == 0:
        print(0)
    else:
        print("-")
