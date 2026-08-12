import sys
input = sys.stdin.readline

def solve():
    n, k = map(int, input().split())
    s = input().strip()
    if 2 * k > n:
        print(-1)
        return
    cost = s[:k].count('L') + s[n-k:].count('R')
    print(cost)

t = int(input())
for _ in range(t):
    solve()
