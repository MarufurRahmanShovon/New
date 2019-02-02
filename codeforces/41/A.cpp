#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[105],t[105];
   bool bal=true;
    cin>>s>>t;
    int l=strlen(s);
    int k=strlen(t);
    if(l!=k)
        bal=false;
    for(int i=0;i<l; i++)
        {
            if(s[i]!=t[l-i-1]){

                bal=false;
               break;

        }
        }

    if (bal)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


}
