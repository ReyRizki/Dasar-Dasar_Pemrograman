/*
Program		: MatriksDiagonal_Rey.c
Description	: Checking if a matrix is a diagonal matrix or not
Author		: Rey Rizki
Date		: 2 November 2019
Time        : 22:12 to 22:16
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    // Declaration
    int M[3][3];                    // The matrix itself
    int i, j;                       // for iteration, as usual
    bool diagonal = true;           // for cheking if it is zero or not

    // Input and process
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &M[i][j]);
            if ((i == j && M[i][j] == 0) || (i != j && M[i][j] != 0)) {
                diagonal = false;
            }
        }
    }

    // Output
    if (diagonal) {
        printf("matriks diagonal\n");
    } else {
        printf("bukan matriks diagonal\n");
    }

    return 0;
}