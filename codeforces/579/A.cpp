#include<bits\stdc++.h>

using namespace std;

int main( )
{
    int n,i,j,count=0,ans=0;
    cin>>n;
    while(n>0)
    {
        count=n%2;
        n/=2;
        if(count==1)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
