#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 2) {
            cout << "2 1\n";
        } else {
            cout << 2 << " ";
            for (int i = n; i >= 3; i--) cout << i << " ";
            cout << 1 << "\n";
        }
    }
}
