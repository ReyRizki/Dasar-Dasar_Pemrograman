#include <stdio.h>

int main() {
    char a, b;

    scanf("%c %c", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("%c %c\n", a, b);

    return 0;
}