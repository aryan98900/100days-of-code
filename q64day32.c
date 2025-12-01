#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);
    int count[10] = {0};
    while (num > 0)
    {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }
    int max_count = 0, result_digit = 0;
    for (int i = 0; i < 10; i++)
    {
        if (count[i] > max_count)
        {
            max_count = count[i];
            result_digit = i;
        }
    }
    printf("%d", result_digit);
    return 0;
}