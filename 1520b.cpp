#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    
    while(t--){
        long long count=0;
        long long n;
        cin>>n;
        for(long long i=1;i<=9;i++){
            long long x=0;
            for(long long j=1;j<=10;j++){
            x=x*10+i;
            if(x<=n)
             count++;
            }
        }
        cout<<count<<endl;
    }


}