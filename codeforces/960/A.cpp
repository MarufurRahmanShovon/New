#include<stdio.h>
#include<string.h>
int main()
{
    int i,acnt=0,bcnt=0,ccnt=0,a=0,b=0,c=0;
    char str[5000];
    scanf("%s",str);
    int flag=1;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='a')
        {
            if(b>0||c>0)flag = 0;
            acnt++;
            a=1;
        }
        else if(str[i]=='b')
        {
            if(c>0)flag=0;
            bcnt++;
            b=1;
        }
        else{
                ccnt++;
                c=1;
                }

    }
    if(ccnt!=bcnt&&ccnt!=acnt)flag=0;
    if(acnt==0||bcnt==0)flag=0;
    if(flag)printf("YES");
    else printf("NO");
    return 0;
}
