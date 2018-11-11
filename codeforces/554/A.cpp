#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int len;
    scanf("%s",str);
    len = strlen(str);
    printf("%d\n",26*(len+1)-len);

    return 0;
}
