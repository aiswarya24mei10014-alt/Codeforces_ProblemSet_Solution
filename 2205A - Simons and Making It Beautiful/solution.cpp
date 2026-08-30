#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        vector<int> p(n);
        int pos = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &p[i]);
            if (p[i] == n) pos = i;
        }
        if (pos != 0) swap(p[0], p[pos]);
        for (int i = 0; i < n; i++) printf("%d ", p[i]);
        printf("\n");
    }
}
