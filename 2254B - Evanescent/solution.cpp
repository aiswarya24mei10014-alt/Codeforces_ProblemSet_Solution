#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        static char buf[200005];
        scanf("%s", buf);

        vector<pair<char,int>> runs;
        int i = 0;
        while (i < n) {
            int j = i;
            while (j < n && buf[j] == buf[i]) j++;
            runs.push_back({buf[i], j - i});
            i = j;
        }

        int R = runs.size();
        bool foundDouble = false, foundSingle = false;

        for (int k = 1; k + 1 < R; k++) { // interior runs only
            if (runs[k].second == 1) {
                foundSingle = true;
                if (runs[k-1].first == runs[k+1].first) foundDouble = true;
            }
        }

        int ans = R;
        if (foundDouble) ans = R - 2;
        else if (foundSingle) ans = R - 1;

        printf("%d\n", ans);
    }
}
