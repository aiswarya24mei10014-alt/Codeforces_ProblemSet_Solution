import sys
from collections import Counter

NEG = -10**18


def max_sum(available, cap, need, sorted_values):
    """Maximum sum of exactly `need` cards from `available`, with per-value capacity `cap`."""
    if need == 0:
        return 0

    res = 0
    for v in sorted_values:
        cnt = available.get(v, 0)
        c = cap.get(v, 0)
        if c <= 0 or cnt <= 0:
            continue

        take = min(cnt, c, need)
        if take:
            res += take * v
            need -= take
            if need == 0:
                return res

    return NEG


def solve():
    data = list(map(int, sys.stdin.read().split()))
    it = iter(data)

    t = next(it)
    out = []

    for _ in range(t):
        n = next(it)
        a = [next(it) for _ in range(n)]

        freq = Counter(a)
        total = sum(v * c for v, c in freq.items())
        max_freq = max(freq.values())
        sorted_values = sorted(freq.keys(), reverse=True)

        # If no two equal cards need to be adjacent, the boss takes full damage.
        if max_freq <= (n + 1) // 2:
            out.append(str(total))
            continue

        ans = 0

        for x, fx in freq.items():
            if fx < 2:
                continue

            for L in range(2, n + 1):
                K = L // 2

                if L & 1:
                    # L is odd: no special case.
                    rem_cap_x = K - 1
                    if rem_cap_x < 0:
                        continue

                    need = L - 2

                    available = dict(freq)
                    available[x] -= 2
                    if available[x] < 0:
                        continue

                    cap = {v: K for v in freq if v != x}
                    cap[x] = rem_cap_x

                    best = max_sum(available, cap, need, sorted_values)
                    if best >= 0:
                        ans = max(ans, 2 * x + best)

                else:
                    # L is even.

                    # Case 1: we use exactly K+1 copies of x.
                    if fx >= K + 1:
                        need_other = K - 1
                        if need_other >= 0:
                            cap = {v: K for v in freq if v != x}
                            best = max_sum(freq, cap, need_other, sorted_values)
                            if best >= 0:
                                ans = max(ans, (K + 1) * x + best)

                    # Case 2: we use at most K copies of x.
                    rem_cap_x = K - 2
                    if rem_cap_x >= 0:
                        need = L - 2

                        available = dict(freq)
                        available[x] -= 2
                        if available[x] < 0:
                            continue

                        cap = {v: K - 1 for v in freq if v != x}
                        cap[x] = rem_cap_x

                        best = max_sum(available, cap, need, sorted_values)
                        if best >= 0:
                            ans = max(ans, 2 * x + best)

        out.append(str(ans))

    print("\n".join(out))


if __name__ == "__main__":
    solve()
