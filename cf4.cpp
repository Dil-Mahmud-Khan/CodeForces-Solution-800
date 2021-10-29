#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,k,i,count=0;
    cin>>n>>k;
    int a[n];

    for(int i=0;i<n;i++){
    cin>>a[i];
}

    for(i=0;i<n;i++){
   
    if(a[i]>=a[k-1] && a[k]!=0){
    
    count++;
    }
    }
    cout<<count;
return 0;
}

