#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<long long> a(n), b(m);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];

        // Number of opponent attacks needed to defeat Bea
        long long needBea = a[0] + n - 1;

        // Number of opponent attacks needed to defeat Ver
        long long needVer = b[0] + m - 1;

        // Bea moves first
        if (needBea >= needVer)
            cout << 1 << '\n';  // Bea wins
        else
            cout << 2 << '\n';  // Ver wins
    }

    return 0;
}
