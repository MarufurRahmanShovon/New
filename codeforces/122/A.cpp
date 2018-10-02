#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp=0,a,b;
    cin>>n;
    if(n%4==0||n%7==0||n%47==0||n%74==0||n%474==0||n%444==0||n%447==0||n%477==0)
        temp=1;
    else
    {

        while(n>0)
        {
            a=n%10;
            n=n/10;
            if(a==4||a==7)
            {
                temp=1;
                continue;
            }
            else
            {
                temp=0;
                break;


            }




        }




    }

    if(temp==1)
        cout<<"YES";
    else
        cout<<"NO";








    return 0;

}
