#include <stdio.h>
#include <stdlib.h>

int f(int num)
{
    if (num == 0 || num == 1)
        return num + 1;
    else
        return f(num - 1) + f(num / 2);
}

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d\n", f(a));
}