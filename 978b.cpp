#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0,ans=0;
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='x'){
            count++;
        }
        else{
            count=0;
        }
        if(count>=3){
            ans++;
        }
        
    }
    cout<<ans<<endl;
    return 0;
}