#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        // All adjacent equal => all characters are same, impossible to balance.
        if (k == n - 1) {
            cout << -1 << '\n';
            continue;
        }

        int runs = n - k;          // number of blocks/runs
        int cnt0 = n / 2;
        int cnt1 = n - cnt0;

        char start;
        int zeroRuns, oneRuns;

        // Try starting with '0'
        int zr0 = (runs + 1) / 2;
        int or0 = runs / 2;

        if (zr0 <= cnt0 && or0 <= cnt1) {
            start = '0';
            zeroRuns = zr0;
            oneRuns = or0;
        } else {
            // Otherwise start with '1'
            start = '1';
            zeroRuns = runs / 2;
            oneRuns = (runs + 1) / 2;
        }

        int add0 = cnt0 - zeroRuns;
        int add1 = cnt1 - oneRuns;

        string ans;
        ans.reserve(n);

        char cur = start;
        bool used0 = false, used1 = false;

        for (int i = 0; i < runs; i++) {
            int len = 1;

            if (cur == '0' && !used0) {
                len += add0;
                used0 = true;
            } else if (cur == '1' && !used1) {
                len += add1;
                used1 = true;
            }

            ans.append(len, cur);
            cur = (cur == '0' ? '1' : '0');
        }

        cout << ans << '\n';
    }

    return 0;
}
