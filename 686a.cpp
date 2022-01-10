#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t, gk,count=0;
    cin>>t>>gk;
    while(t--){
        char n;
        long long d;
        cin>>n>>d;
        if(n=='+'){
            gk+=d;
        }
        else if(n=='-' && gk>=d){
            gk-=d;
        }
        else if(n=='-' && gk<d){
            count++;
            continue;
        }

    }
    cout<<gk<<" "<<count<<endl;
    return 0;
}