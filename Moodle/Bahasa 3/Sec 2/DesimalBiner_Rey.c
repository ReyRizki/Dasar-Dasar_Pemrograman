/*
Program		: DesimalBiner_Rey.c
Description	: Convert decimal number to binary
Author		: Rey Rizki
Date		: 3 November 2019
Time        : 5:38 PM to 5:54
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>
#include <string.h>

int main() {
    // Declaration
    int X;                      // for input
    int binary[31];             // for output
    int i;                      // for iteration, as usual

    // Input
    scanf("%d", &X);

    // Process
    i = 0;
    while (X > 0) {
        binary[i] = X % 2;
        X = X / 2;
        i++;
    }
    length = i;

    for (i = length-1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
