#include<stdio.h>
#include<string.h>
int main()
{
    char org[]={"hello"};
    char str[100];
    scanf("%s",str);
    int cnt=0,i;
    int len = strlen(str);
    if(len<5)
        printf("NO");
    else{
        for(i=0;i<len;i++)
        {
            if(str[i]==org[cnt])
                cnt++;

        }
        if(cnt==5)
            printf("YES");
        else
            printf("NO");
    }

    return 0;

}
