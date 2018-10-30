#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[5]={0};
int n,data;
cin>>n;
for(int i=1;i<=n;i++)
{
    cin>>data;
    a[data]++;
}
int car;
car=a[4]+a[3]+(a[2]/2);
a[1]-=a[3];
if(a[2]%2==1)
{
    car+=1;
    a[1]-=2;
}
if(a[1]>0)
{
    car+=(a[1]+3)/4;

}
 cout<<car;
}
