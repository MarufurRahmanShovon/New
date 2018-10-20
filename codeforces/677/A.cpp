#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n,h,X,sum=0;
    cin>>n>>h;
    for(int i=1; i<=n; i++)
    {
        cin>>X;
        if(X<=h)
        {
            sum++;
        }
        else if(X>h)
        {
            sum+=2;
        }
    }
    cout<<sum;
    return 0;
}
