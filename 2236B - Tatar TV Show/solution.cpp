#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        static char s[200005];
        scanf("%s", s + 1); // 1-indexed

        vector<int> parity(k, 0);
        for (int i = 1; i <= n; i++) {
            int r = (i - 1) % k;
            parity[r] ^= (s[i] - '0');
        }

        bool ok = true;
        for (int r = 0; r < k; r++)
            if (parity[r]) { ok = false; break; }

        puts(ok ? "YES" : "NO");
    }
}
