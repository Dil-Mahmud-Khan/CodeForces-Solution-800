#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,count=1;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    cin>>arr[i];

    for(int j=0;j<n-1;j++){
        if(arr[j]!=arr[j+1])
            count++;
        
    }
    cout<<count<<endl;

    return 0;
}