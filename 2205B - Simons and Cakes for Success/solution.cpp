#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long n;
        scanf("%lld", &n);
        long long k = 1;
        long long m = n;
        for(long long p = 2; p * p <= m; p++){
            if(m % p == 0){
                k *= p;
                while(m % p == 0) m /= p;
            }
        }
        if(m > 1) k *= m; // leftover prime factor
        printf("%lld\n", k);
    }
}
