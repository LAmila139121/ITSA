#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (a + b + c >= 220 || (a >= 60 && b >= 60 && c >= 60))
            printf("P\n");
        else if (a + b + c < 200 && ((a < 60 && b >= 60 && c >= 60) || (b < 60 && a >= 60 && c >= 60) || (c < 60 && b >= 60 && a >= 60) || a >= 80 || b >= 80 || c >= 80))
            printf("M\n");
        else
            printf("F\n");
    }
}