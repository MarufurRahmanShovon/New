#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>str;
        int k=str.size();
        if(k>10){
            cout<<str[0]<<k-2<<str[k-1]<<endl;
        }
        else cout<<str<<endl;
    }
}
