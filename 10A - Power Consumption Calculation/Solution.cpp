#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long P1, P2, P3, T1, T2;
    cin >> n >> P1 >> P2 >> P3 >> T1 >> T2;

    vector<long long> l(n), r(n);
    for (int i = 0; i < n; i++) cin >> l[i] >> r[i];

    long long total = 0;

    for (int i = 0; i < n; i++) {
        // active period: always normal mode
        total += P1 * (r[i] - l[i]);

        if (i + 1 < n) {
            long long gap = l[i+1] - r[i];
            long long t1 = min(gap, T1);
            gap -= t1;
            long long t2 = min(gap, T2);
            gap -= t2;
            long long t3 = gap; // rest is sleep

            total += t1 * P1 + t2 * P2 + t3 * P3;
        }
    }

    cout << total << endl;
    return 0;
}
