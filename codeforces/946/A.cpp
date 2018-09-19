#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A[101];
    int n;
    cin>>n;

    for (int i=0; i<n; ++i)cin>>A[i];

    int b=0,c=0;
    for (int i=0; i<n; ++i)
    {
        if (A[i]>0)
            b+=A[i];
        else
            c+=A[i];
    }


    int f=b-c;
    cout<<f<<endl;

}
