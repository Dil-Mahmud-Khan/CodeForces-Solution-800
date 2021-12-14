#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int chest=0,biceps=0,back=0;
    for(int i=0;i<n;i+=3){
        chest+=arr[i];
    }
    for(int i=1;i<n;i+=3){
        biceps+=arr[i];
    }
    for(int i=2;i<n;i+=3){
        back+=arr[i];
    }
    int mx=max(chest,max(back,biceps));
    if(mx==chest){
        cout<<"chest"<<endl;
    }
    else if(mx==biceps){
        cout<<"biceps"<<endl;
    }

    else if(mx==back){
        cout<<"back"<<endl;
    }
    return 0;
    

}
