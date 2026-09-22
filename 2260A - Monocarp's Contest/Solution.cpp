#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        vector<int> a(n);
        for (auto &x : a) scanf("%d", &x);

        int need = (a[0] == 1) + (a[n-1] == 1);
        if (need == 0) {
            printf("0\n");
            continue;
        }

        int midEasy = 0;
        for (int i = 1; i < n-1; i++)
            if (a[i] == 0) midEasy++;

        printf("%d\n", midEasy >= need ? need : -1);
    }
}
