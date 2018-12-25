#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m=-1;
    cin>>k>>l;
    while(l%k==0)
    {
        l=l/k;
        m=1+m;
    }
    if(m>=0&&l==1)
    {
        cout<<"YES"<<endl<<m;
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
