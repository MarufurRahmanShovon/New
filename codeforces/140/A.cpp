#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    double R,r;
    cin>>n>>R>>r;
    if(n==1){
        if(R>=r)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else
    {
        if(R<r)
            cout<<"NO"<<endl;
        else {if(asin(r/(R-r))*n<=3.1415927)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    }
}
