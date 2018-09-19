#include<bits/stdc++.h>
using namespace std;
int  main()
{
	int n , g[100005],result=1 ;
	cin>>n;
	for(int i=0;i<=n;i++)
		cin>>g[i];
	for(int i=0;i<n-1;i++)
	{
		if(g[i]!=g[i+1])
			result++;
	}
	cout<<result;
}
