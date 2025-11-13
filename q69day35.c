#include <stdio.h>

int main(void)
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int first, second;
    first = second = -1;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first)
        {
            second = arr[i];
        }
    }
    if (second == -1)
    {
        printf("No second largest element\n");
    }
    else
    {
        printf("%d\n", second);
    }
    return 0;
}