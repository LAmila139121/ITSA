#include <stdio.h>
#include <string.h>

int main()
{
    char buf[1024];
    scanf("%s", buf);
    int len = strlen(buf);
    int i;
    for (i = 0; i < len / 2; i++)
    {
        if (buf[i] != buf[len - i - 1])
        {
            printf("NO\n");
            break;
        }
    }
    if (i >= len / 2)
        printf("YES\n");
}