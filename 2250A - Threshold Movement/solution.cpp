#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        vector<long long> w(n + 1);
        for (int i = 1; i <= n; i++) scanf("%lld", &w[i]);

        if (n % 2 != 0) {
            printf("NO\n");
            continue;
        }

        long long maxEven = LLONG_MIN, minOdd = LLONG_MAX;
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 1) minOdd = min(minOdd, w[i]); // odd position (1,3,5,...)
            else maxEven = max(maxEven, w[i]);           // even position (2,4,6,...)
        }

        if (maxEven + 2 <= minOdd) printf("YES\n");
        else printf("NO\n");
    }
}
