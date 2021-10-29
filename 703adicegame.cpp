#include<iostream>
using namespace std;
int main(){
    int n,m,c,mis=0,cri=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m>>c;
        if(m>c){
            mis++;
        }
        else if(m<c){
            cri++;
        }

    }

    if(mis>cri){
        cout<<"Mishka";
    }
    else if(cri>mis){
        cout<<"Chris";
    }
    else{
        cout<<"Friendship is magic!^^";
    }
    
    
}