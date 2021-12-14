#include<bits/stdc++.h>
using namespace std;
set<int>a,b;
int main(){
    int r,c;
    cin>>r>>c;
    char ch;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>ch;
            if(ch=='S'){
                a.insert(i);
                b.insert(j);
            }
        }
    }
    cout<<r*c-a.size()*b.size()<<endl;
    return 0;
}