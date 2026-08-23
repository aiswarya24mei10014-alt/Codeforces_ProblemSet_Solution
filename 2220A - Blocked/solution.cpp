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

        vector<int> sorted_a = a;
        sort(sorted_a.begin(), sorted_a.end());
        bool hasDup = false;
        for (int i = 1; i < n; i++)
            if (sorted_a[i] == sorted_a[i-1]) { hasDup = true; break; }

        if (hasDup) {
            printf("-1\n");
        } else {
            sort(a.begin(), a.end(), greater<int>());
            for (int i = 0; i < n; i++)
                printf("%d%c", a[i], i+1<n ? ' ' : '\n');
        }
    }
}
