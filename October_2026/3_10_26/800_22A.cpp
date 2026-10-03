#include<bits/stdc++.h>
using namespace std;
// sort the list of numbers
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int minum=101, secondminnum=102;
    int n;
    cin>>n;
    while(n--){
        int num;
        cin>>num;
        if(num<minum){ // cannot do equal to here as then secondminnum=minum when another element appears same as minum; 
            secondminnum=minum;
            minum=num;
        }else if((num!=minum) && (num<=secondminnum)){
            secondminnum=num;
        }
    }
    if(secondminnum==102 || secondminnum==101){
        cout<<"NO";
    }else{
        cout<<secondminnum;
    }
    return 0;
}
