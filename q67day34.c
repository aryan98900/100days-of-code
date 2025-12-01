#include <stdio.h>

void insert_at_position(int arr[], int *size, int position, int element)
{
    for (int i = *size; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    (*size)++;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    int arr[n + 1]; 
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int position, element;
    scanf("%d %d", &position, &element);
    insert_at_position(arr, &n, position, element);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}