#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin>>n>>m;
    vector<char> store;
    store.reserve(m);
    bool iffalse=false;
    char prev='#';
    for(int i=0;i<n;i++){
        iffalse=false;
        store.clear(); 
        for(int j=0;j<m;j++){
            char colour;
            cin>>colour;
            if(j==0){
                if(colour==prev){
                    iffalse=true;
                    break;
                }
                prev=colour;
            }
            if(!store.empty() && store.back()!=colour){
                iffalse=true;
                break;
            }
            store.push_back(colour);
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