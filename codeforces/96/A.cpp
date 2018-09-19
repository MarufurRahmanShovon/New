#include<stdio.h>
#include<string.h>
int main()
{
	char str[11000];
	int i,j,k,l,m,n;
	while(scanf("%s",str)!=EOF)
	{
		int ans=1;
		int len=strlen(str);
		m=str[0]-'0';
		for(i=1;i<len;i++)
		{
			if(str[i]-'0'==m)
			ans++;
			else
			{
				m=str[i]-'0';
				ans=1;
			}
			if(ans>=7)
			{
				printf("YES\n");
				break;
			}
		}
		if(ans<7)
		printf("NO\n");
	}
	return 0;
}
