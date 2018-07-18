#include<stdio.h>

int a[102];
int b[102];
int main()
{
    int t,i,j;
    while(scanf("%d",&t)!=EOF)
    {

        int ans=0;
        for(i=1; i<=t; i++)
        {
            scanf("%d",&a[i]);
            ans+=a[i];
        }
        int sum=ans/(t/2);
        for( i=1; i<=t; i++)
        {
            for(j=i+1; j<=t; j++)
            {
                if(a[i]+a[j]==sum&&b[i]==0&&b[j]==0)
                {
                    printf("%d %d\n",i,j);
                    b[i]=b[j]=1;
                    break;
                }
            }
        }
    }
}
