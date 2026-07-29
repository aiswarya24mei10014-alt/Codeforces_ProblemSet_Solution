import sys
 
def ceil_div(a, b):
    return (a + b - 1) // b
 
def solve(n, x, y, z):
    # Option 1: no AI
    time1 = ceil_div(n, x + y)
    
    # Option 2: use AI
    if x * z >= n:
        # finishes during setup phase itself
        time2 = ceil_div(n, x)  # this will be <= z
    else:
        remaining = n - x * z
        speed_after = x + 10 * y
        time2 = z + ceil_div(remaining, speed_after)
    
    return min(time1, time2)
 
def main():
    data = sys.stdin.read().split()
    idx = 0
    t = int(data[idx]); idx += 1
    out = []
    for _ in range(t):
        n, x, y, z = map(int, data[idx:idx+4])
        idx += 4
        out.append(str(solve(n, x, y, z)))
    print("\n".join(out))
 
if __name__ == "__main__":
    main()
