#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        vector<int> l(n+1), r(n+1), u(n+1), v(n+1);
        for(int i=1;i<=n;i++)
            scanf("%d %d %d %d", &l[i], &r[i], &u[i], &v[i]);

        int ans = 0;
        for(int m = n; m >= 1; m--){
            int k = 1;
            for(int i = 1; i <= n && k <= m; i++){
                int rightRank = m - k + 1;
                bool leftOk  = !(l[i] <= k && k <= r[i]);
                bool rightOk = !(u[i] <= rightRank && rightRank <= v[i]);
                if(leftOk && rightOk) k++;
            }
            if(k > m){ ans = m; break; } // all m slots filled
        }
        printf("%d\n", ans);
    }
}
