#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d", &a);

    for (int i = 2; i < a / 2; i++)
    {
        if (a % i == 0)
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
}