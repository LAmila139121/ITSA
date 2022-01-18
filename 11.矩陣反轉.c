#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int **matrix = malloc(sizeof(int *) * row);
    for (int i = 0; i < row; i++)
        *(matrix + i) = malloc(sizeof(int) * col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            scanf("%d", &matrix[i][j]);
    }

    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row - 1; j++)
            printf("%d ", matrix[j][i]);
        printf("%d\n", matrix[row - 1][i]);
    }
}