#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char str1[128];
    char str2[512];

    scanf("%s %s", str1, str2);
    int cnt = 0;
    char *ptr = str2;
    while ((ptr = strstr(ptr, str1)) != NULL)
    {
        ptr++;
        cnt++;
    }

    printf("%d\n", cnt);
}