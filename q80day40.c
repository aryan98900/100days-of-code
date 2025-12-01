#include <stdio.h>

int main(void)
{
    int rows1, cols1, rows2, cols2, i, j, k;
    scanf("%d %d", &rows1, &cols1);
    int matrix1[rows1][cols1];
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols1; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }
    scanf("%d %d", &rows2, &cols2);
    if (cols1 != rows2)
    {
        printf("Error: Incompatible matrix dimensions for multiplication.\n");
        return 1;
    }
    int matrix2[rows2][cols2];
    for (i = 0; i < rows2; i++)
    {
        for (j = 0; j < cols2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    int result[rows1][cols2];
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols2; j++)
        {
            result[i][j] = 0;
            for (k = 0; k < cols1; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}