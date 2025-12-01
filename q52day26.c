#include <stdio.h>

int main(void) 
{
    int i, j;
    int pattern[] = {1, 3, 5, 3, 1};
    int groups = sizeof(pattern) / sizeof(pattern[0]);

    for (i = 0; i < groups; i++) 
    {
        for (j = 0; j < pattern[i]; j++) 
        {
            printf("*\n");
        }
        printf("\n");
    }

    return 0;
}