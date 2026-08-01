#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        vector<long long> b(n);
        for (auto &x : b) scanf("%lld", &x);
        sort(b.rbegin(), b.rend());

        bool ok = true;
        for (int i = 2; i < n; i++) {
            long long nxt = b[i-2] % b[i-1];
            if (nxt != b[i]) { ok = false; break; }
        }

        if (ok) printf("%lld %lld\n", b[0], b[1]);
        else printf("-1\n");
    }
}
