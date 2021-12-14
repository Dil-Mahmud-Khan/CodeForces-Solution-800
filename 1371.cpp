#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int a;
    cin>>t;
    while(t--){
        int count=0;
        cin>>a;
        count=a/2;
       
       if(a%2==1)
           count++;
       
       cout<<count<<endl;
    }
    return 0;
}