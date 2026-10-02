#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin>>n>>m;
    bool top=false;
    int t, l=m-1, r=0, b=0;
    vector<vector<char>> store(n, vector<char>(m,'/0'));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char c;
            cin>>c;
            store[i][j]=c;
            if(c=='*'){
                if(!top){
                    top=true;
                    t=i;
                }
                l=min(l,j);
                r=max(j, r);
                b=max(i,b);
            }
        }
    }
    // output rectangle
    for(int i=t;i<=b; i++){
        for(int j=l; j<=r;j++){
            cout<<store[i][j];
        }
        cout<<'\n';
    }
    return 0;
}