#include <stdio.h>

int main(void)
{
    int rows, cols, i, j, is_symmetric = 1;
    scanf("%d %d", &rows, &cols);
    if (rows != cols)
    {
        printf("False\n");
        return 0;
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
        for (j = 0; j < cols; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                is_symmetric = 0;
                break;
            }
        }
        if (!is_symmetric)
            break;
    }
    if (is_symmetric)
        printf("True\n");
    else
        printf("False\n");
    return 0;
}