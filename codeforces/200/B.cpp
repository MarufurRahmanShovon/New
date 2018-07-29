#include<bits/stdc++.h>
using namespace std;
int main()
{

    double sum2, n,sum1=0,i;
    cin>>n;
    vector<int> v(n);
    for(i=0;i<n;i++){ cin >> v[i];
    sum1+=v[i];
    }
    sum2=sum1/n;
    cout<<fixed<<setprecision(10)<<sum2;

}
