#include <stdio.h>

int main() {
    int numberOfRows = 5;
    int row;
    int column;

    for (row = numberOfRows; row >= 1; row--) {
        for (column = 1; column <= row; column++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}