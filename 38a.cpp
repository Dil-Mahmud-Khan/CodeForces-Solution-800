#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[101];
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int a,b;
    cin>>a>>b;
    int count=0;
    for(int i=a-1;i<b-1;i++){
        count+=arr[i];
    }
    cout<<count<<endl;
    return 0;
}