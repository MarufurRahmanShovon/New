#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    string str1,str2;
    cin>>n>>k>>str1;
    sort(str1.begin(),str1.end());
     str2.push_back(str1[0]);
     int sum=str1[0]-'a'+1,cnt=1;
     for(int i=1;i<n;i++){
     if(cnt==k)break;
     if(str1[i]>str2.back()+1){
        cnt++;
        str2.push_back(str1[i]);
        sum+=str1[i]-'a'+1;
     }

     }
     if(cnt<k)
        cout<<-1;
     else cout<<sum;

}
