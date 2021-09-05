#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='D')
               cout<<'U';
            else if(s[i]=='U')
              cout<<'D';
               else
                cout<<s[i];
        }
        cout<<endl;

    }
    return 0;
}
