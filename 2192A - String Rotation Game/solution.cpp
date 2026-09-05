#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int c = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] != s[(i + 1) % n]) c++;
        }
        cout << (c == n ? n : c + 1) << "\n";
    }
}
