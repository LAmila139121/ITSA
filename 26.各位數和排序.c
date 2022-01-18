#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int input[10];
    int x[10] = {0};
    for (int i = 0; i < n; i++)
        scanf("%d", &input[i]);

    for (int i = 0; i < n; i++)
    {
        int a = input[i];
        while (a >= 10)
        {
            x[i] += a % 10;
            a = a / 10;
        }
        x[i] += a;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (x[j] == x[j + 1])
            {
                if (input[j] > input[j + 1])
                {
                    int tmp = x[j];
                    x[j] = x[j + 1];
                    x[j + 1] = tmp;
                    tmp = input[j];
                    input[j] = input[j + 1];
                    input[j + 1] = tmp;
                }
            }
            if (x[j] > x[j + 1])
            {
                int tmp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = tmp;
                tmp = input[j];
                input[j] = input[j + 1];
                input[j + 1] = tmp;
            }
        }
    }

    printf("%d", input[0]);
    for (int i = 1; i < n; i++)
        printf(" %d", input[i]);
    printf("\n");
}