#include<iostream>
using namespace std;
int main(){
    long long n;
    long long k;

    cin>>n;

    if(n%2==0){
        cout<<n/2;
    }
    else{
        k=-(n/2+1);
        cout<<k;
    }

    return 0;
}