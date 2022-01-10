#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,flag=0;
        int a[26];
        string s="",s1;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>s1;
            s=s+s1;
        }
        for(int i=0;i<26;i++){
            a[i]=0;
        }
        for(int i=0;i<s.length();i++){
            a[s[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(a[i]%n){
                flag=1;
                break;
            }
        }
        if(flag){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

        }
        return 0;
    }
