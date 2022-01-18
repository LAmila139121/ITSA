#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int distance2 = (abs(x) - 0) * (abs(x) - 0) + (abs(y) - 0) * (abs(y) - 0);
    if (distance2 < 40000)
        printf("inside\n");
    else
        printf("outside\n");
}