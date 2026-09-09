#include <bits/stdc++.h>
using namespace std;

const long long MOD = 676767677;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        vector<int> a(n);
        for(auto &x : a) scanf("%d", &x);

        long long ans = 0;
        for(int x : a) if(x != 1) ans = (ans + x) % MOD;
        if(a[n-1] == 1) ans = (ans + 1) % MOD;

        printf("%lld\n", ans);
    }
}
