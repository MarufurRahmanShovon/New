#include<stdio.h>
int main()
{
    double n,m;
    scanf("%lf %lf",&n,&m);
    int ans= floor(n*m*0.5);
    printf("%d",ans);
    return 0;
}
