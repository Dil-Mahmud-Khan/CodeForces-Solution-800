#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i]; 
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
            if(i==n-1){
                break;
            }
            else{
                cout<<arr[n-1]<<" ";
                n--;
            }
        }
        cout<<endl;
    }
    return 0;
}