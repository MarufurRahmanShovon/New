#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char c;
    int a=0,d=0;
    cin>>n;
    while(n--){
        cin>>c;
        if(c=='A'){
            a++;
        }
        else if(c=='D')
        {
            d++;}
    }
    if(a>d){
        cout<<"Anton";

    }
    else if(d>a){
    cout<<"Danik";
    }
    else cout<<"Friendship";

}
