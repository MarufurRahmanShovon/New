#include<bits/stdc++.h>
using namespace std;
int arr[1000006];

void seive()
{
    memset(arr,0,sizeof(arr));
    for(int i=2;i<=sqrt(1000006);i++)
    {
        if(arr[i]==0)
        {
            for(int j=i*2;j<=1000006;j+=i)
                arr[j]=1;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    seive();
    while(n--)
    {
        long long c;
        cin>>c;
        if(c==1||c==2||c==3)
            cout<<"NO"<<endl;
        else
        {
            long long cc=sqrt(c);
        if(cc*cc==c&&!arr[cc])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
