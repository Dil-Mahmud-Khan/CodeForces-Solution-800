#include<iostream>
#include<string>
using namespace std;
int main()
{
    int j,n=0;
    string s;
    cin>>j;
    for(int i=0;i<j;i++){

        cin>>s;
        if(s[1]=='+'){
            n++;
        }
        else{
            n--;
        }
    }
        cout<<n;
    
  
}