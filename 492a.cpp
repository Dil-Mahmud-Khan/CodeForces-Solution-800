#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int i=0,last=0,curr=0;
    cin>>t;
    while(t>0){
        i++;
        curr=last+i;
        last=curr;
        t=t-curr;
        if(t<0){
            i--;
        }
    }
    cout<<i<<endl;
}
