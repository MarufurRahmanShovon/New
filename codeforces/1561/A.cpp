#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int nn,aa=0;
        cin>>nn;
        vector<int>v;
        for(int i=0;i<nn;i++)
        {
            cin>>aa;
            v.push_back(aa);
        }
        int i,c2=0;
        for(i=1;;i++)
        {
           int c1=0;
            for(int j=1;j<nn;j++)

            {
                if(v[j]<v[j-1])
                    c1++;
            }
            if (c1==0)
            {
                cout<<i-1<<endl;
                break;
            }
            else
            {
                if (i%2==0)
                {
                    for(int j=1;j<nn-1;j+=2)
                    {
                        if (v[j]>v[j+1])
                            swap(v[j],v[j+1]);
                    }
                }
                else
                {
                    for(int j=0;j<nn-1;j+=2)
                    {
                        if (v[j]>v[j+1])
                            swap(v[j],v[j+1]);
                    }
                }
            }
        }

    }
}
