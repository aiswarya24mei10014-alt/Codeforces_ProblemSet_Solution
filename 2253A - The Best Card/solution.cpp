#include <bits/stdc++.h>
using namespace std;

const int MAXV = 200005; // n+1 max = 2*10^5 + 1

int main(){
    vector<char> composite(MAXV+1, false);
    for(int i=2; (long long)i*i<=MAXV; i++){
        if(!composite[i])
            for(int j=i*i; j<=MAXV; j+=i)
                composite[j]=true;
    }

    int t;
    scanf("%d",&t);
    while(t--){
        int n; scanf("%d",&n);
        int L = n+1;
        bool prime = (L>=2) && !composite[L];
        puts(prime ? "YES" : "NO");
    }
}
