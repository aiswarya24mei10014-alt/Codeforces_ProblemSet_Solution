import sys
 
def solve():
    input_data = sys.stdin.buffer.read().split()
    idx = 0
    t = int(input_data[idx]); idx += 1
    out = []
    for _ in range(t):
        n = int(input_data[idx]); k = int(input_data[idx+1]); m = int(input_data[idx+2])
        idx += 3
        if k > m:
            out.append("NO")
            continue
        out.append("YES")
        a = []
        boundary_val = m - k + 1
        for i in range(1, n + 1):
            a.append(boundary_val if i % k == 0 else 1)
        out.append(' '.join(map(str, a)))
    sys.stdout.write('\n'.join(out) + '\n')
 
solve()
