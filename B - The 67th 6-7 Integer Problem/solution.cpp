#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        vector<int> a(7);
        int sum=0;
        for (int i = 0;i<7;i++){
            cin>> a[i];
            sum+=a[i];
        }
        int ans =INT_MIN;
        for(int i =0;i<7;i++){
            ans= max(ans,2*a[i]-sum);
        }
        cout<< ans <<'\n';
    }
    return 0;
}
