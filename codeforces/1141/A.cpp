#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,d;
    cin>>n>>m;
    if(m%n!=0)
    {
        cout<<-1;

    }
    else if(m==n)
    {
        cout<<0;
    }
    else {
        d=(m/n);
    int cnt=0;
    //cout<<d<<endl;


    while(d%2==0||d%3==0)
    {
        if(d%2==0)
        {
            int k=d/2;
            cnt++;
            //cout<<k<<endl;
            d=k;
            //cout<<cnt<<endl;
        }
        else if(d%3==0)
        {
            int k=d/3;
            d=k;
            cnt++;
           // cout<<cnt<<3<<endl;
        }
        //cout<<d<<endl;

    }

    if(cnt==0||d!=1){
        cout<<-1;
    }
    else
    cout<<cnt;
    }
    return 0;
}

