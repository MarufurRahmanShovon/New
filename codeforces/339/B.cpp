#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m,crnt=1,g;
    unsigned long long mov=0;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>g;
        if(g-crnt>=0){
            mov+=g-crnt;
            crnt=g;
        }
        else
            mov+=g-crnt+n;
        crnt=g;
    }
    cout<<mov;



}
