#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    int  result=0;
    char c='a';
    for(int i=0;i<a.length();i++){
        result+=min(abs(c-a[i]),26-abs(c-a[i]));
        c=a[i];
    }
    cout<<result<<endl;
    return 0;
}