t = int(input())
for _ in range(t):
    n = int(input())
    s = input().strip()
    ans = 0
    run = 0
    for c in s:
        if c == '#':
            run += 1
        else:
            if run > 0:
                ans = max(ans, (run + 1) // 2)
            run = 0
    if run > 0:
        ans = max(ans, (run + 1) // 2)
    print(ans)
