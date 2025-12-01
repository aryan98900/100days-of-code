#include <stdio.h>

int main(void)
{
    int rows, cols, i, j, sum = 0;
    scanf("%d %d", &rows, &cols);
    if (rows != cols)
    {
        printf("Error: Matrix is not square.\n");
        return 1;
    }
    int matrix[rows][cols];
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < rows; i++)
    {
        sum += matrix[i][i];
    }
    printf("%d\n", sum);
    return 0;
}