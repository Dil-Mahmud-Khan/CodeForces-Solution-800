#include<bits/stdc++.h>
using namespace std;
int main(){

    int sum=0;
    string s;
    cin>>s;

    for(char c: s){
        if(islower(c))
        sum++;
        else sum--;
    }
    for(char c:s){
        if(sum>=0)
        {
            cout<<(char)tolower(c);
        }
        else
        {
            cout<<(char)toupper(c);
        }
    }
}