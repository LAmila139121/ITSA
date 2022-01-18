#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a;
    scanf("%d", &a);
    int n = a;
    int t[10] = {0};
    if (a < 0)
    {
        n = a * -1;
        n = n - 1;
    }

    for (int i = 7; i >= 0; i--)
    {
        t[i] = n % 2;
        n = n / 2;
    }

    if (a < 0)
    {
        for (int i = 7; i >= 0; i--)
        {
            if (t[i] == 0)
                t[i] = 1;
            else
                t[i] = 0;
        }
    }

    for (int i = 0; i < 8; i++)
        printf("%d", t[i]);
    printf("\n");
}