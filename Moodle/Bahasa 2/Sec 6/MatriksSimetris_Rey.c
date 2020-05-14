/*
Program		: MatriksSimetris_Rey.c
Description	: Checking if a matrix is symetric or not
Author		: Rey Rizki
Date		: 2 November 2019
Time        : 22:23 to 22:38
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    // Declaration
    int M[3][3];                    // The matrix itself
    int i, j;                       // for iteration, as usual
    bool symetric = true;           // false if not meet the reuqirement

    // Input
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    // Process
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == j) {
                if (M[0][0] != M[2][2]) {
                    symetric = false;
                }
            } else {
                if (M[i][j] != M[j][i]) {
                    symetric = false;
                }
            }
        }
    }

    // Output
    if (symetric) {
        printf("matriks simetris\n");
    } else {
        printf("bukan matriks simetris\n");
    }

    return 0;
}