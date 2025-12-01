#include <stdio.h>

int main(void)
{
    int n, i, target;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);
    int found_index = -1;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            found_index = i;
            break;
        }
    }
    if (found_index != -1)
    {
        printf("Found at index %d", found_index);
    }
    else
    {
        printf("-1");
    }
    return 0;
}