#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Octal equivalent: %o\n", num);
    printf("Hexadecimal equivalent: %x\n", num);

    return 0;
}

