/*
Program		: Pola1_Rey.c
Description	: Making pattern 1
Author		: Rey Rizki
Date		: 3 November 2019
Time        : 11:30 to 11:36
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>

int main() {
    // Declaration
    int i, j;               // for iteration, as usual
    int N;                  // for the rows

    // Input
    scanf("%d", &N);

    // Output
    for (i = 0; i < N; i++) {
        for (j = 0; j <= i; j++) {
            printf("*");
            if (j < i) {
                printf(" ");
            } else {
                printf("\n");
            }
        }
    }

    return 0;
}