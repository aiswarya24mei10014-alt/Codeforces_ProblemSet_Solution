#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        vector<int> a(n);
        for (auto &x : a) scanf("%d", &x);

        // sort by step size s_i = 100/a_i ascending  <=>  a_i descending
        sort(a.begin(), a.end(), greater<int>());

        long long R = 0;
        bool ok = true;
        for (int i = 0; i < n; i++) {
            long long s = 100 / a[i];
            if (s > R + 1) { ok = false; break; }
            R += 100; // full range of this problem gets absorbed
        }

        printf(ok ? "Yes\n" : "No\n");
    }
}
