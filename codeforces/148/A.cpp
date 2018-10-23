#include<bits/stdc++.h>
using namespace std;
int main()
{

    int k,l,m,n,d,cnt=0,temp=0;
    cin>>k>>l>>m>>n>>d;
    int arr[d+1];
    for(int i=0; i<d+1; ++i)
        arr[i]=0;
    temp=k;
    while(temp<=d)
    {

        arr[temp]=1;
        temp+=k;




    }
    temp=l;
    while(temp<=d)
    {
        arr[temp]=1;
        temp+=l;



    }
    temp=m;
    while(temp<=d)
    {

        arr[temp]=1;
        temp+=m;



    }
    temp=n;
    while(temp<=d)
    {

        arr[temp]=1;
        temp+=n;



    }


    for(int i=1; i<=d; ++i)
    {
        if(arr[i]==1)
            cnt++;


    }
    cout<<cnt<<endl;

    return 0;
}
