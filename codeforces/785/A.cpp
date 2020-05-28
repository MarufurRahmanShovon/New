#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,l=0;
    string s;

    cin>>i;
    while(i--){
        cin>>s;
        if(s=="Tetrahedron"){
            l=l+4;}
        else if(s=="Cube"){
        l=l+6;}
        else if(s=="Octahedron"){
            l=l+8;
        }
        else if(s=="Dodecahedron")
        {
            l=l+12;
        }
        else if(s=="Icosahedron")
        {
            l=l+20;
        }

    }
    cout<<l;

}
