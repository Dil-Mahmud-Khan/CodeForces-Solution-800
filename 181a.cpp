#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int days=0,left=0;
    int k=min(a,b);
    days=k;
    a-=k;
    b-=k;
    while(a>1){
        left++;
        a-=2;
    }
    while(b>1){
        left++;
        b-=2;
    }
    cout<<days<<" "<<left;
    return 0;
}