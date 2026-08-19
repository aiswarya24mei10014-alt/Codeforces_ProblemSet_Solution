#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        vector<long long> a(n);
        for (auto &x : a) scanf("%lld", &x);

        long long running = 0;
        int count = 0;
        for (int j = n - 1; j >= 0; j--) {
            running = a[j] + max(0LL, running);
            if (running > 0) count++;
        }
        printf("%d\n", count);
    }
}
