#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b,count=0;
    cin>>n>>m;
    for(int b=0;b<=m*m;b++){
        a=m-b*b;
        if(a*a+b==n && a>=0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}