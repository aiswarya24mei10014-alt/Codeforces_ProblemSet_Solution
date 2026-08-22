#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long n, c, k;
        scanf("%lld %lld %lld", &n, &c, &k);
        vector<long long> a(n);
        for(auto &x : a) scanf("%lld", &x);
        sort(a.begin(), a.end());
        for(long long x : a){
            if(x > c) break;                 // no monster is killable from here on
            long long take = min(k, c - x);  // boost this one as much as possible
            c += x + take;
            k -= take;
        }
        printf("%lld\n", c);
    }
}
