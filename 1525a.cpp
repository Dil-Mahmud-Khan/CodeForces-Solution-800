#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        int g=__gcd(k,100-k);
        int x=k/g;
        int y=(100-k)/g;
        cout<<x+y<<endl;
    }
    return 0;
}