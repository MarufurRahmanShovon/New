#include<bits/stdc++.h>
using namespace std;
int main()
{
int a, b, c;
    cin >>a>>b>>c; bool flag=false;
    for(int i=0;i<=c/a;i++)
    {
        if((c-i*a)%b==0)
        {
            flag=true;
            break;
        }
    }
    if(flag)
        cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}
