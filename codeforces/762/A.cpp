#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
int main()
{
  long long int n,i,k,j=0,sq,d;
    cin>>n>>k;
    sq=sqrt(n);
    for(i=1; i<=sq; i++)
    {
        if(n%i==0)
        {
            d=n/i;
            if((d*d)!=n)
            {
                v.push_back(d);
                j++;

            }
            v.push_back(i);
            j++;
        }
    }
    sort(v.begin(),v.end());
    if(k>j) printf("-1\n");
    else printf("%lld\n",v[k-1]);

    return 0;
}
