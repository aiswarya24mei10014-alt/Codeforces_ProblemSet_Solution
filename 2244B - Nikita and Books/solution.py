import sys

def solve():
    data = sys.stdin.buffer.read().split()
    idx = 0
    t = int(data[idx]); idx += 1
    results = []

    for _ in range(t):
        n = int(data[idx]); idx += 1
        a = [int(x) for x in data[idx:idx+n]]
        idx += n

        cum = 0
        prev = 0
        S = 0
        ok = True

        for i in range(n):
            S += a[i]
            if i < n - 1:
                b = prev + 1
                cum += b
                if cum > S:
                    ok = False
                    break
                prev = b
            else:
                b = S - cum
                if b <= prev:
                    ok = False
                cum = S

        results.append("YES" if ok else "NO")

    sys.stdout.write("\n".join(results) + "\n")

solve()
