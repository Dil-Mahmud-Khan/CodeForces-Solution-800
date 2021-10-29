#include<bits/stdc++.h>
using namespace std;
int main(){

    int k,n,w;
    int sum=0;
    cin>>k>>n>>w;

    for(int i=1;i<=w;i++){
        sum+=i;

    }
    int x=(sum*k)-n;
    if(x<0){
        cout<<"0"<<endl;
    }

    else{
        cout<<x<<endl;
    }
    

}

