#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,sum=0;
    cin>>a>>b;



    if(a>b)
    sum=0;

    else
        while(a<=b){
        a=a*3;
        b=b*2;
        sum++;
        }
    cout<<sum<<endl;

    
    return 0;
}
