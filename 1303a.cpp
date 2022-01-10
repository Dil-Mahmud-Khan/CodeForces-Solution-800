#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int l=s.length();
        vector<int> v;
        for(int i=0;i<l;i++){
            if(s[i]=='1'){
                v.push_back(i);
            }
        }
        int count=0;
        int size=v.size();
        for(int i=1;i<size;i++){
            count+=((v[i]-v[i-1])-1);
        }
        cout<<count<<endl;
    }
    return 0;
}