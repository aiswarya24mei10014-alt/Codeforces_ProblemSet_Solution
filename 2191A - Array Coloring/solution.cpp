#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> pos(n + 1);
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            pos[a] = i; // position (0-indexed) of value a
        }
        bool ok = true;
        for (int v = 1; v < n; v++) {
            if (pos[v] % 2 == pos[v + 1] % 2) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << "\n";
    }
}
