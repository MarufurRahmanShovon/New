#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l;
    cin>>n;
    int ar[n],oar[n];

    for(int i=0;i<n;i++){

        cin>>l;
        ar[i+1]=l;
        oar[l-1]=i+1;
    }
    for(int k=0;k<n;k++){
    cout<<oar[k]<<" ";

    }
}
