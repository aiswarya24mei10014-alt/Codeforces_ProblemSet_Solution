#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, k;
        scanf("%d %d", &n, &k);
        char s[25];
        scanf("%s", s);
        int ans = 0;
        for(int i = 0; i < n; i += k){
            bool allOnes = true;
            for(int j = i; j < i + k; j++){
                if(s[j] == '0'){ allOnes = false; break; }
            }
            if(allOnes) ans++;
        }
        printf("%d\n", ans);
    }
}
