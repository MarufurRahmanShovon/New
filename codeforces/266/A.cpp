#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans;
    char arr[100];
    while(cin>>n)
    {
        cin>>arr;
        ans = 0;
        for (int i=0;i<(n-1);i++)
        {
            if(arr[i]!=arr[i+1])
                ans++;
        }
    }
    cout<<(n-1-ans)<<endl;
}
