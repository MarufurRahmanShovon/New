#include<bits/stdc++.h>

using namespace std;

int main( )
{
    vector<string>v;
    string b="I hate",c=" that ",d="I love",e=" it";
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            if(i==n)
            {
                v.push_back(d);
            }
            else
            {
                string a="";
                a=d+c;
                v.push_back(a);
            }

        }
        else
        {
            if(i==n)
            {
                v.push_back(b);
            }
            else
            {
                string a="";
                a=b+c;
                v.push_back(a);
            }

        }

    }
    for(i=0;i<n;i++)
    {
        cout<<v[i];
    }
    cout<<e<<endl;
    return 0;
}
