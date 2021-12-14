#include<bits/stdc++.h>
using namespace std;
int main(){
    bool f=false;
    int a[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,};
    int m,n;
    cin>>n>>m;
    for(int i=0;i<15;i++){
        if(a[i]==n){
            if(a[i+1]==m){
                f=true;
            }
        }
    }
    if(f){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}