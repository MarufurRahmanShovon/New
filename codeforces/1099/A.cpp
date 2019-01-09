#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w,h,u1,d1,u2,d2,cur_h=0,cur_s=0;
    cin>>w>>h>>u1>>d1>>u2>>d2;
    cur_h=h; cur_s=w+h;
    while(cur_h !=0)
    {
        if(cur_h==d1)
        {
            cur_s-=u1;
            if(cur_s<0) cur_s=0;
            cur_h--;
            cur_s+=cur_h;


        }
        else if(cur_h==d2)
        {
            cur_s-=u2;
            if(cur_s<0) cur_s=0;
            cur_h--;
            cur_s+=cur_h;


        }
        else{
               cur_h--;
               cur_s+=cur_h;
                if(cur_s<0) cur_s=0;
        }

    }
     if(cur_s<0) cur_s=0;
    cout<<cur_s;
    return 0;

}
