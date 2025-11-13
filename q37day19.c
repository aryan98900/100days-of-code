#include <stdio.h>

int main() {
    int a, b, tempA, tempB, gcd, lcm;
    scanf("%d %d", &a, &b);

    tempA = a;
    tempB = b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;
    lcm = (tempA * tempB) / gcd;

    printf("%d", lcm);

    return 0;
}

