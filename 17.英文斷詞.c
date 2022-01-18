#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *getword(char *line, char *word)
{
    char *ptr = line;
    char *qtr = word;

    word[0] = '\0';

    while (*ptr && isspace(*ptr))
        ptr++;
    while (*ptr && !isspace(*ptr))
    {
        if (isupper(*ptr))
            *ptr = tolower(*ptr);
        *qtr++ = *ptr++;
    }
    *qtr = '\0';

    if (word[0] == '\0')
        return NULL;
    else
        return ptr;
}

int main()
{
    char input[1000];
    fgets(input, 1000, stdin);
    char *ptr = input;
    char word[100];
    char **list = malloc(sizeof(char *) * 100);
    int cnt = 0;
    while ((ptr = getword(ptr, word)))
    {
        *(list + cnt) = malloc(sizeof(char) * 100);
        list[cnt] = strdup(word);
        for (int i = 0; i < cnt; i++)
        {
            if (strcmp(word, list[i]) == 0)
            {
                list[cnt] = "\0";
                cnt--;
                break;
            }
        }
        cnt++;
    }
    printf("%s", list[0]);
    for (int i = 1; i < cnt; i++)
        printf(" %s", list[i]);
    printf("\n");
}