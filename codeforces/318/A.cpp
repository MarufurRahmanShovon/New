#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long num,ans,pos;
    while(scanf("%I64d %I64d",&num,&pos)!=EOF)
    {
        if(num%2==0)
        {
            if(pos<=num/2)printf("%I64d\n",2*pos-1);
            else printf("%I64d\n",2*pos-num);
        }
        else
        {
            if( pos<=(num/2+1) )printf("%I64d\n",2*pos-1);
            else printf("%I64d\n",2*pos-num-1);
        }

    }
}
