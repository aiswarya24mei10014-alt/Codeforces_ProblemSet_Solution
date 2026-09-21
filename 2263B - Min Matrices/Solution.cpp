#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n,k; scanf("%d %d",&n,&k);
        if(k<n || k>2*n-1){ puts("-1"); continue; }
        int d=2*n-k;
        vector<vector<int>> a(n, vector<int>(n,0));
        int v=1;
        for(int i=0;i<d;i++) a[i][i]=v++;
        for(int r=d;r<n;r++) a[r][0]=v++;
        for(int c=d;c<n;c++) a[0][c]=v++;
        // v is now k+1
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                if(!a[i][j]) a[i][j]=v++;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) printf("%d ",a[i][j]);
            puts("");
        }
    }
}
