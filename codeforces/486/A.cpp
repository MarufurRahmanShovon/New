#include<stdio.h>
int main()
{
    long long int n;
    scanf("%I64d",&n);
    if(n%2==0)
    {
       long long  int ans=n/2;
        printf("%I64d",ans);
    }
    else
    {


       long long  int ans1 = -((n+1)/2);
    printf("%I64d",ans1);
    }
}
