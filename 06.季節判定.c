#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d", &a);

    if (a >= 3 && a <= 5)
        printf("Spring\n");
    else if (a >= 6 && a <= 8)
        printf("Summer\n");
    else if (a >= 9 && a <= 11)
        printf("Autumn\n");
    else
        printf("Winter\n");
}