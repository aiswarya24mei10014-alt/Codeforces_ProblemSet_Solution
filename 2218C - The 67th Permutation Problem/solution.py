import sys

def main():
    data = sys.stdin.buffer.read().split()
    idx = 0
    t = int(data[idx]); idx += 1
    out = []
    for _ in range(t):
        n = int(data[idx]); idx += 1
        block = [0] * (3 * n)
        for i in range(n):
            block[3*i]   = i + 1
            block[3*i+1] = n + 1 + 2*i
            block[3*i+2] = n + 2 + 2*i
        out.append(' '.join(map(str, block)))
    sys.stdout.write('\n'.join(out) + '\n')

main()
