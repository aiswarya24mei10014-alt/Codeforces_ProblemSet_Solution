import sys

def main():
    data = sys.stdin.buffer.read().split()
    idx = 0
    t = int(data[idx]); idx += 1
    out = []
    for _ in range(t):
        n, m = int(data[idx]), int(data[idx+1]); idx += 2
        cnt = [0] * (m + 2)
        for _ in range(n):
            v = int(data[idx]); idx += 1
            cnt[v] += 1
        suf = [0] * (m + 2)
        for v in range(m, 0, -1):
            suf[v] = suf[v+1] + cnt[v]
        best = 0
        for x in range(1, m + 1):
            c = suf[x]
            if 2*x <= m:
                c += cnt[2*x]
            if c > best:
                best = c
        out.append(str(best))
    print('\n'.join(out))

main()
