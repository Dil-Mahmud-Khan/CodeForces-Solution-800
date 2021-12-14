#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,count=0;
    cin>>t;
    for(int i=1;i<t;i++){
        if(t%i==0){
            count++;
        }
    }
    cout<<count<<endl;
}