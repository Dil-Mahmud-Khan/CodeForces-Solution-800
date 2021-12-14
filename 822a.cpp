#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,count=1;
    cin>>a>>b;
    for(int i=1;i<=min(a,b);i++){
        count*=i;
    }
    cout<<count<<endl;
    return 0;
}