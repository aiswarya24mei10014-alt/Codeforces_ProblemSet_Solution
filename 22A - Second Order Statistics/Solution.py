n = int(input())
arr = list(map(int, input().split()))

# Sort the array
arr.sort()

# Find the minimum
minimum = arr[0]

# Find the second order statistic (smallest element > minimum)
second_order = None
for i in range(1, n):
    if arr[i] > minimum:
        second_order = arr[i]
        break

if second_order is not None:
    print(second_order)
else:
    print("NO")
