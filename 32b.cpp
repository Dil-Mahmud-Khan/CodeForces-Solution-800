/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    char arr[200];
    cin>>arr;
    for(int i=0;i<strlen(arr);i++){
    
    if(arr[i]=='.'){
        cout<<"0";
        continue;
    }
     else if(arr[i]=='-' && arr[i+1]=='.'){
         cout<<"1";
         continue;
     }

    else if(arr[i]=='-' && arr[i+1]=='-'){
        cout<<"2";
        i++;
        continue;
    }   
}
cout<<endl;

}
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i;int n;
    char arr[202];
    cin>>arr;
    for(i=0; i<strlen(arr); i++){
        if(arr[i]=='.'){
            cout<<"0";
            continue;
        }
        else if(arr[i]=='-' && arr[i+1]=='.'){
            cout<<"1";
            i++;
            continue;
        }
        else if(arr[i]=='-' && arr[i+1]=='-'){
            cout<<"2";
            i++;
            continue;
        }
    }
    cout<<endl;
}


