#include<bits/stdc++.h>
using namespace std;
char mk_lower(char ch)
{
    if(ch >= 97 && ch <= 122)return ch-32;
    else return ch;
}
int main()
{

    string str;
    cin>>str;
    cout<<mk_lower(str[0]);
   int len=str.length();
    for(int i=1;i<len;i++){
        cout<<str[i];}

}
