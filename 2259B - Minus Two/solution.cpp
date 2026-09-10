#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        long long oddCnt = 0, mod0 = 0, mod2 = 0;
        for (int i = 0; i < n; i++) {
            long long a;
            scanf("%lld", &a);
            if (a % 2 == 1) oddCnt++;
            else if (a % 4 == 0) mod0++;
            else mod2++;
        }
        long long ans = max({oddCnt, mod0, mod2});
        printf("%lld\n", ans);
    }
}
