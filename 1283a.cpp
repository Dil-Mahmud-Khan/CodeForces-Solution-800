#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int h,m;
        cin>>h>>m;
        int day=24*60;
        int minute=h*60+m;
        cout<<day-minute<<endl;
        
    }
    return 0;
}
