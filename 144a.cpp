#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int maxval=0,minval=100;
    int maxi=0,mini=0;
    cin>>n;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a>maxval){
            maxi=i;
            maxval=a;
        }
        if(a<=minval){
            mini=i;
            minval=a;
        }
    }

    if(maxi>mini){
        cout<<(maxi-1)+(n-mini)-1;

    }
    else{
        cout<<(maxi-1)+(n-mini);
    }
    return 0;
    
}