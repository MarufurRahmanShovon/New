#include<stdio.h>
#include<math.h>
int main()

{
    double k,n,s,p;
    scanf("%lf %lf %lf %lf",&k,&n,&s,&p);
    double  ans=k* ceil(n/s);
    int ans1 = ceil(ans/p);
    printf("%d",ans1);
    return 0;
}
