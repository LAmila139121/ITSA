#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int time = (c * 60 + d) - (a * 60 + b);

    if (time < 30)
    {
        printf("0\n");
        return 0;
    }

    int hour = time / 60;
    int min = time % 60;

    if (hour < 2)
        printf("%d\n", hour * 2 * 30 + (min / 30) * 30);
    else if (hour >= 2 && hour < 4)
        printf("%d\n", 120 + ((hour - 2) * 2 * 40) + ((min / 30) * 40));
    else if (hour >= 4)
        printf("%d\n", 280 + ((hour - 4) * 2 * 60) + ((min / 30) * 60));

    return 0;
}