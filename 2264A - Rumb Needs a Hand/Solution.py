t = int(input())
for _ in range(t):
    n = int(input())
    p = list(map(int, input().split()))
    S = [i + 1 for i in range(n) if p[i] != i + 1]
    m = len(S)
    ok = all(p[S[j] - 1] == S[m - 1 - j] for j in range(m))
    print("YES" if ok else "NO")
