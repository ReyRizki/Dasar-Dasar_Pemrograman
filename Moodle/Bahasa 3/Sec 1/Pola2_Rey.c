/*
Program		: Pola1_Rey.c
Description	: Making pattern 2
Author		: Rey Rizki a.k.a Mydoom
Date		: 3 November 2019
Time        : 1:17 PM to 1:27 PM
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>

// Power function
int power2(int number) {
    if (number == 0) {
        return 1;
    } else {
        return (2 * power2(number-1));
    }
}

int main() {
    // Declaration
    int i, j;               // for iteration, as usual
    int N;                  // for the rows

    // Input
    scanf("%d", &N);

    // Output
    for (i = 0; i < N; i++) {
        for (j = i; j >= 0; j--) {
            printf("%d", power2(j));
            if (j > 0) {
                printf(" ");
            } else {
                printf("\n");
            }
        }
    }

    return 0;
}