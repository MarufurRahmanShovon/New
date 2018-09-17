#include<stdio.h>
#include<math.h>
int main()
{
    double n,m,a;
    scanf("%lf %lf %lf",&n,&m,&a);
    long long int ans=(ceil(m/a))*ceil(n/a);
    printf("%I64d ",ans);
    return 0;
}
