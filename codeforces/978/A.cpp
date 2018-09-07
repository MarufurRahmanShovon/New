#include<bits/stdc++.h>
using namespace std;
int flag[1005];
int a[55];
int b[55];
int top=0;
set<int> s;
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        s.insert(a[i]);
    }
    printf("%d\n",s.size());
    for(int i=n-1;i>=0;i--){
        if(flag[a[i]]==0){
            flag[a[i]]=1;
            b[top++]=a[i];
        }
    }
    for(int i=top-1;i>=0;i--){
        if(i==top-1)
            printf("%d",b[i]);
        else
            printf(" %d",b[i]);
    }
    printf("\n");
}
