 #include <iostream>

using namespace std;

int main()

{

    int a,b,c=0;

    cin>>a>>b;

    for(int i=0;i<a*b;i++){

        char t;

        cin>>t;

        if(t=='C' || t=='M' || t=='Y')c++;

    }

    if(c) cout<<"#Color\n";

    else cout<<"#Black&White\n";

    return 0;


}
