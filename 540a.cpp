#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string a,b;
    cin>>n>>a>>b;
    int count=0;
    for(int i=0;i<n;i++){
        count+=min(10-abs(a[i]-b[i]),abs(a[i]-b[i]));
    }
    cout<<count<<endl;
}