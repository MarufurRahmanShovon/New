#include<stdio.h>

int digit(int n){
   int ans=0;
   while(n>0){
     ans+=n%10;
     n/=10;
   }
   return ans;
}
int main()
{
    int k,n=18,ans;
    scanf("%d",&k);
    while(k){
        n++;
        if(digit(n)==10){
            ans=n;
            k--;
        }
    }
    printf("%d",n);
    return 0;
}
