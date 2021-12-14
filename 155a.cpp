#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int best,worst,count=0;
    cin>>best;
    worst=best;
    while(--t){
        int a;
        cin>>a;
        if(a<worst){
            worst=a;
            count++;
        }
        if(a>best){
            best=a;
            count++;
        
        }
    }
    cout<<count<<endl;
    return 0;
}