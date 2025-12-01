#include <stdio.h>

int main(void)
{
    int numberOfRows = 5;
    int row, column, space;

    for (row = 1; row <= numberOfRows; row++) {
        for (space = 1; space <= numberOfRows - row; space++) {
            printf(" ");
        }
        for (column = numberOfRows - row + 1; column <= numberOfRows; column++) {
            printf("%d", column);
        }
        printf("\n");
    }

    return 0;
}