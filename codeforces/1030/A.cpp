#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    int curmax=0;
    for(int i=1; i<=t; i++)
    {
        cin>>n;
        curmax=curmax+n;
    }
    if(curmax!=0)
    {
        cout<<"HARD";
    }
    else
        cout<<"EASY";




}


