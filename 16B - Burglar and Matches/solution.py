def solve():
    n, m = map(int, input().split())
    containers = []
    for _ in range(m):
        a, b = map(int, input().split())
        containers.append((a, b))
    
    # Sort by matches per box, descending
    containers.sort(key=lambda x: -x[1])
    
    total = 0
    remaining = n
    
    for a, b in containers:
        if remaining <= 0:
            break
        take = min(a, remaining)
        total += take * b
        remaining -= take
    
    print(total)

solve()
