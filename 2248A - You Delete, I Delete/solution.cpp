#include <bits/stdc++.h>
using namespace std;

string removeAt(const string& s, int idx) {
    return s.substr(0, idx) + s.substr(idx + 1);
}

int main(){
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string best;
        bool bestSet = false;

        for (int i = 0; i < (int)s.size(); i++) {
            if (s[i] == '0') {
                string s1 = removeAt(s, i);       // Alice's move
                string bobMin;
                bool bobSet = false;

                for (int j = 0; j < (int)s1.size(); j++) {
                    if (s1[j] == '1') {
                        string cand = removeAt(s1, j); // Bob's move
                        if (!bobSet || cand < bobMin) {
                            bobMin = cand;
                            bobSet = true;
                        }
                    }
                }

                if (!bestSet || bobMin > best) {
                    best = bobMin;
                    bestSet = true;
                }
            }
        }
        cout << best << "\n";
    }
}
