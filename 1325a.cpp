#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        int a=0,b=0;
        cin>>x;
        if(x%2==0){
            a=x/2;
            b=x/2;
        }
        else{
            a=x-1;
            b=1;
        }
        cout<<a<<" "<<b<<endl;

    }
    return 0;
}