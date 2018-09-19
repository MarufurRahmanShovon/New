#include<stdio.h>
#define inf 0x0f0f0f0f
int main(){
	int i,j,k,m,n,imin=inf;
	int ai,pi;
	int ans=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&ai,&pi);
		imin=imin>pi?pi:imin;
		ans=ans+ai*imin;
	}
	printf("%d\n",ans);
}









