#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    else{
    return gcd(b,a%b);
    }
}
int main(){
    int a,b,n;
    cin>>a>>b>>n;
    while(1){
        int x=gcd(a,n);
        n=n-x;
        if(n==0){
            cout<<0<<endl;
            break;

        }
        x=gcd(b,n);
        n=n-x;
        if(n==0){
            cout<<1<<endl;
            break;
        }

    }
    return 0;
}