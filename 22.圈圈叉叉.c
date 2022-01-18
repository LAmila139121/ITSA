#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            scanf("%d", &num[i][j]);
    }

    for (int i = 0; i < 3; i++)
    {
        if (num[i][0] == num[i][1] && num[i][1] == num[i][2])
        {
            printf("True\n");
            return 0;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (num[0][i] == num[1][i] && num[1][i] == num[2][i])
        {
            printf("True\n");
            return 0;
        }
    }
    if (num[0][0] == num[1][1] && num[0][0] == num[2][2])
    {
        printf("True\n");
        return 0;
    }
    if (num[0][2] == num[1][1] && num[0][2] == num[2][0])
    {
        printf("True\n");
        return 0;
    }
    printf("False\n");
}