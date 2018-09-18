#include<stdio.h>
int main()
{
    int m,n,c;
    scanf("%d %d",&m,&n);
    if(m>=n){
        c=(m-n)/2;
        printf("%d %d",n,c);
    }
    else if(m<=n)
    {
        int d=(n-m)/2;
        printf("%d %d",m,d);
    }
    return 0;
}
