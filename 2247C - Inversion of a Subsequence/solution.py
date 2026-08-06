import sys

def solve():
    data = list(map(int, sys.stdin.buffer.read().split()))
    idx = 0
    t = data[idx]
    idx += 1

    ans = []

    for _ in range(t):
        n = data[idx]
        idx += 1

        a = data[idx:idx + n]
        idx += n

        b = data[idx:idx + n]
        idx += n

        if a == b:
            ans.append("0")
            continue

        # Starting from all zeros: no operation is possible.
        if not any(a):
            ans.append("-1")
            continue

        # If b is all ones, then the last operation would always create a zero.
        if all(b):
            ans.append("-1")
            continue

        # Number of positions where a has 1 and b has 0.
        # One operation is possible iff this number is odd.
        need_turn_off = sum(1 for x, y in zip(a, b) if x == 1 and y == 0)

        if need_turn_off % 2 == 1:
            ans.append("1")
        else:
            ans.append("2")

    print("\n".join(ans))

if __name__ == "__main__":
    solve()
