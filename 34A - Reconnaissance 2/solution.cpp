#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    int bestDiff = INT_MAX, bestI = 1, bestJ = 2;
    for (int i = 1; i <= n; i++) {
        int j = (i % n) + 1; // next neighbor, wraps n -> 1
        int diff = abs(a[i] - a[j]);
        if (diff < bestDiff) {
            bestDiff = diff;
            bestI = i;
            bestJ = j;
        }
    }
    cout << bestI << " " << bestJ << endl;
    return 0;
}
