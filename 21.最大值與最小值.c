#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    float num, max, min;
    scanf("%f", &num);
    max = min = num;

    for (int i = 0; i < 9; i++)
    {
        scanf("%f", &num);
        if (num > max)
            max = num;
        if (num < min)
            min = num;
    }
    printf("maximum:%.2f\nminimum:%.2f\n", max, min);
}