#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long n;
        scanf("%lld", &n);
        long long ans = 0;
        for(long long i = 1; i <= n; ){
            long long v = n / i;
            long long j = n / v;      // block [i, j] shares same floor(n/i)
            ans += v * v * (j - i + 1);
            i = j + 1;
        }
        printf("%lld\n", ans);
    }
}
