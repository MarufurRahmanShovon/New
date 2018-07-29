#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    bool b=0;
    for(int i=1; i<str.length(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z') b=0;
        else{
            b=1;
            break;
        }
    }
    if(b==0){
        if(islower(str[0])) str[0] = toupper(str[0]);
        else str[0] = tolower(str[0]);
        for(int i=1; i<str.length(); i++)
            str[i] = tolower(str[i]);
    }
    cout << str;
}
