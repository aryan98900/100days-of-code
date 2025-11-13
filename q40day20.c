#include <stdio.h>
#include <string.h>

int main() {
    char binary[50];
    int i;
    scanf("%s", binary);

    for (i = 0; i < strlen(binary); i++) {
        if (binary[i] == '1')
            binary[i] = '0';
        else if (binary[i] == '0')
            binary[i] = '1';
    }
    printf("%s", binary);

    return 0;
}
