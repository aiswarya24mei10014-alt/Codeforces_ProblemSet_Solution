n, m = map(int, input().split())
rows = [input() for _ in range(n)]

ok = True
for row in rows:
    if len(set(row)) != 1:  # all chars in row must be same
        ok = False

for i in range(1, n):
    if rows[i][0] == rows[i-1][0]:  # adjacent rows must differ
        ok = False

print("YES" if ok else "NO")
