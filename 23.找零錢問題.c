#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *getword(char *line, char *word)
{
    char *ptr = line;
    char *qtr = word;
    word[0] = '\0';

    while (*ptr && !isdigit(*ptr))
        ptr++;
    while (*ptr && isdigit(*ptr))
        *qtr++ = *ptr++;

    *qtr = '\0';

    if (word[0] == '\0')
        return NULL;
    else
        return ptr;
}

int main()
{

    char input[128];
    fgets(input, 128, stdin);
    char *ptr = input;
    char word[128];
    int a[5];
    for (int i = 0; i < 4; i++)
    {
        ptr = getword(ptr, word);
        a[i] = atoi(word);
    }
    if (a[1] * 15 + a[2] * 20 + a[3] * 30 > a[0])
    {
        printf("0\n");
        return 0;
    }
    int num = a[0] - (a[1] * 15 + a[2] * 20 + a[3] * 30);

    printf("%d,%d,%d\n", num % 50 % 5, num % 50 / 5, num / 50);
}