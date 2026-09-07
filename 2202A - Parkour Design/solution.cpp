#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long x, y;
        scanf("%lld %lld", &x, &y);
        long long N = x - 2*y;
        bool ok = false;
        if (N % 3 == 0) {
            long long m = max(0LL, -y);
            if (N >= 6*m) ok = true;
        }
        printf(ok ? "YES\n" : "NO\n");
    }
}
