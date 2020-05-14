/*
Program		: Barisan1_Rey.c
Description	: Making a pattern of numbers
Author		: Rey Rizki
Date		: 21 November 2019
Time        : 2:57 P.M. to 3:05 P.M.
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>

int main() {
    // DECLARATION
    int increment;                      // to increase the number
    int pattern;                        // the pattern number that will be displayed
    int i;                              // for iteration, as usual

    // INPUT
    scanf("%d", &pattern);

    // OUTPUT
    increment = 3;
    printf("%d ", pattern);
    for (i = 1; i < 15; i++) {
        pattern += increment;
        printf("%d", pattern);
        if (i % 3 != 0) {
            increment++;
        } else {
            increment -= 2;
        }
        if (i < 14) {
            printf(" ");
        } else {
            printf("\n");
        }
    }

    return 0;
}