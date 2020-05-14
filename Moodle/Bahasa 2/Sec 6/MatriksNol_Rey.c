/*
Program		: MatriksNol_Rey.c
Description	: Checking if a matrix is a zero matrix or not
Author		: Rey Rizki
Date		: 2 November 2019
Time        : 21:52 to 21:57
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    // Declaration
    int M[3][3];                    // The matrix itself
    int i, j;                       // for iteration, as usual
    bool zero = true;               // false if there is a matrix element that is not zero

    // Input and process
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &M[i][j]);
            if (M[i][j] != 0) {
                zero = false;
            }
        }
    }

    // Output
    if (zero) {
        printf("matriks nol\n");
    } else {
        printf("bukan matriks nol\n");
    }

    return 0;
}