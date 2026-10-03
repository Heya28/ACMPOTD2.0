#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin>>n>>m;
    bool iffalse=false;
    char prev='#';
    for(int i=0;i<n;i++){
        iffalse=false;
        char first='$';
        for(int j=0;j<m;j++){
            char colour;
            cin>>colour;
            if(j==0){
                if(colour==prev){
                    iffalse=true;
                    break;
                }
                first=colour;
                prev=colour;
            }
            if(first!=colour){
                iffalse=true;
                break;
            }
        }
        if(iffalse){
            break;
        }
    }
    if(iffalse){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
    return 0;
}