#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    int cnt=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>m;
        int sub=m-n;
        if(sub>=2){
            cnt=cnt+1;
        }
        else cnt=cnt+0;
    }
    cout<<cnt;

}
