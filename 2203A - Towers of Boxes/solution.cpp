#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m, d;
        scanf("%d %d %d", &n, &m, &d);
        int H = d / m + 1;
        int towers = (n + H - 1) / H;  // ceil(n/H)
        printf("%d\n", towers);
    }
    return 0;
}
