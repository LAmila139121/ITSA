#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a >= b)
    {
        for (int i = b; i > 0; i--)
        {
            if (a % i == 0 && b % i == 0)
            {
                printf("%d\n", i);
                return 0;
            }
        }
    }
    else
    {
        for (int i = a; i > 0; i--)
        {
            if (a % i == 0 && b % i == 0)
            {
                printf("%d\n", i);
                return 0;
            }
        }
    }
}