import sys
 
def solve():
    input_data = sys.stdin.read().split()
    idx = 0
    t = int(input_data[idx]); idx += 1
    results = []
 
    for _ in range(t):
        n, c = int(input_data[idx]), int(input_data[idx+1])
        idx += 2
        a = list(map(int, input_data[idx:idx+n])); idx += n
        b = list(map(int, input_data[idx:idx+n])); idx += n
 
        # Option 1: no reorder
        feasible1 = True
        cost1 = 0
        for i in range(n):
            if a[i] < b[i]:
                feasible1 = False
                break
            cost1 += a[i] - b[i]
 
        # Option 2: reorder once, match sorted arrays
        sa = sorted(a)
        sb = sorted(b)
        feasible2 = True
        cost2 = 0
        for i in range(n):
            if sa[i] < sb[i]:
                feasible2 = False
                break
            cost2 += sa[i] - sb[i]
 
        ans = None
        if feasible1:
            ans = cost1
        if feasible2:
            candidate = c + cost2
            if ans is None or candidate < ans:
                ans = candidate
 
        results.append(str(ans) if ans is not None else "-1")
 
    print("\n".join(results))
 
solve()
