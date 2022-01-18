#include <stdio.h>
int main()
{
    float n;
    int m;

    while (scanf("%f %d", &n, &m) != EOF)
    {
        if (m == 1)
            printf("%.1f\n", (n - 80) * 0.7);
        else
            printf("%.1f\n", (n - 70) * 0.6);
    }

    return 0;
}