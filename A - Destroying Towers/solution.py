import sys
 
def solve():
    input_data = sys.stdin.read().split()
    idx = 0
    t = int(input_data[idx]); idx += 1
    results = []
    for _ in range(t):
        n = int(input_data[idx]); idx += 1
        a = input_data[idx:idx+n]
        a = list(map(int, a))
        idx += n
 
        total = 0
        r = n - 1
        while r >= 0:
            m = 0
            for i in range(1, r + 1):
                if a[i] < a[m]:
                    m = i
            total += a[m] * (r - m + 1)
            r = m - 1
        results.append(total)
 
    print('\n'.join(map(str, results)))
 
solve()
