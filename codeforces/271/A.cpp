#include<bits/stdc++.h>
using namespace std;
int main(){
    int y,x;
    cin>>y;
    while(true){
    y=y+1;
    int a=y/1000;
    int b=y/100%10;
    int c=y/10%10;
    int d=y%10;
    if(a!=b&&a!=d&&a!=c&&b!=c&&c!=d&&b!=d)
    {
        break;
    }
    }
    cout<<y;
}
