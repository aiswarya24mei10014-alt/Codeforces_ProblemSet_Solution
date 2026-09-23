#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; scanf("%d",&t);
    while(t--){
        long long x,y,k;
        scanf("%lld %lld %lld",&x,&y,&k);
        long long d = y - x;
        unsigned long long ans = 0;

        if (x > d) {
            // every a in range exceeds d, so every term is just d
            ans = (unsigned long long)d * k;
        } else {
            long long L = min(x + k - 1, d);   // last "small" a
            for (long long a = x; a <= L; a++)
                ans += d % a;
            long long smallCount = L - x + 1;
            long long remaining = k - smallCount;
            ans += (unsigned long long)d * remaining;
        }
        printf("%llu\n", ans);
    }
}
