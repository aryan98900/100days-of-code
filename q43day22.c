#include <stdio.h>

int main() {
    int n, temp, remainder, sum = 0, fact, i;
    scanf("%d", &n);

    temp = n;

    while (temp != 0) {
        remainder = temp % 10;
        fact = 1;
        for (i = 1; i <= remainder; i++) {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }
    if (sum == n)
        printf("Strong number");
    else
        printf("Not strong number");

    return 0;
}
