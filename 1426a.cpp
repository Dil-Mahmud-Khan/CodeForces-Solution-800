#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int count=1;
        n-=2;
        if(n<=0){
            cout<<1<<endl;
        }
        else{
            count+=ceil((double)n/x);
            cout<<count<<endl;
        }
    }
    return 0;
}