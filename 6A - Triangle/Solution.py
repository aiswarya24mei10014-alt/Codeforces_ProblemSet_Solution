a = list(map(int, input().split()))

result = "IMPOSSIBLE"
from itertools import combinations

for combo in combinations(a, 3):
    x, y, z = sorted(combo)
    if x + y > z:
        result = "TRIANGLE"
        break
    elif x + y == z:
        result = "SEGMENT"

print(result)
