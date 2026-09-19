#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long d;
    cin >> n >> d;
    vector<long long> b(n);
    for (auto &x : b) cin >> x;

    long long ans = 0;
    for (int i = 1; i < n; i++) {
        if (b[i] <= b[i-1]) {
            long long k = (b[i-1] - b[i]) / d + 1;
            b[i] += k * d;
            ans += k;
        }
    }
    cout << ans << endl;
    return 0;
}
