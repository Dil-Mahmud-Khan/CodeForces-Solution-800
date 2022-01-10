#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,k1,k2;
    cin>>a>>b>>c>>d;
    k1=min(min(a,c),d);
    a=a-k1;
    k2=min(a,b);
    cout<<k1*256+k2*32;
    return 0;
}
