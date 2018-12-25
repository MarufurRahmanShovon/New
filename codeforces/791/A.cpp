#include <bits/stdc++.h>
using namespace std;
int main() {
	int a , b , sum=0;
	cin>>a>>b;
	for (int i=0; ; i++)
	{
		a=a*3; b=b*2;
		if (a>b)
		{
			sum+=1;
			break;
		}
		else
			sum+=1;
	}
	cout<<sum;
	return 0;
}
