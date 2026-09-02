import sys
from collections import Counter

def main():
    data = sys.stdin.read().split()
    idx = 0
    t = int(data[idx]); idx += 1
    out = []
    for _ in range(t):
        n = int(data[idx]); idx += 1
        cnt = Counter()
        total = n * n
        cnt.update(data[idx: idx + total])
        idx += total
        max_freq = max(cnt.values())
        out.append("YES" if max_freq <= n * (n - 1) else "NO")
    print('\n'.join(out))

main()
