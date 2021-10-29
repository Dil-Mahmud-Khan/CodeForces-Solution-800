#include<iostream>
using namespace std;
int main(){
    int n;
    int count=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];

    if(arr[i]==1){
    count++;
    }

    }

    if(count==0){
        cout<<"EASY";
    }

    else{
        cout<<"HARD";
    }
return 0;

}