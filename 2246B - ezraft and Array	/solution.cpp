#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        if (n == 1) {
            printf("1\n");
        } else if (n == 2) {
            printf("-1\n");
        } else {
            vector<long long> a = {1, 2, 3};
            long long S = 6;
            for (int i = 4; i <= n; i++) {
                a.push_back(S);
                S *= 2;
            }
            for (int i = 0; i < n; i++)
                printf("%lld ", a[i]);
            printf("\n");
        }
    }
}
