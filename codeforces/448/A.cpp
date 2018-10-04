#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,e,f,g,n;
    cin>>a>>b>>c;
    cin>>e>>f>>g;
    cin>>n;
    int l=a+b+c;
    int k=e+f+g;
    if(l>0 && k>0 && n<2)
    {
        cout<<"NO";
        return 0;
    }
    int need=(l/5)+(k/10);
    if(l%5>0) need++;
    if(k%10>0) need++;
    if(need<=n)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
