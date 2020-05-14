/*
Program		: PerkalianMatriks_Rey.c
Description	: Multiply 2 matrixes
Author		: Rey Rizki
Date		: 2 November 2019
Time        : 10:56 to 11:56
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>

int main() {
    // Declaration
    int X[75][75], Y[75][75];               // The input matrix
    int Z[75][75];                          // The output matrix
    int a, b, c, d;                         // The element of matrix
    int i, j, k;                            // For iteration, as usual

    // Input
    // inputting X matrix with a row and b coloumn
    scanf("%d %d", &a, &b);
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            scanf("%d", &X[i][j]);
        }
    }

    // inputting Y matrix with c row and d coloumn
    scanf("%d %d", &c, &d);
    for (i = 0; i < c; i++) {
        for (j = 0; j < d; j++) {
            scanf("%d", &Y[i][j]);
        }
    }
    
    // Process
    // Giving the initial state to Z array
    for (i = 0; i < a; i++) {
        for (j = 0; j < d; j++) {
            Z[i][j] = 0;
        }
    }


    // THE MULTIPLY PROCESS, THIS IS THE CORE
    for (i = 0; i < a; i++) {
        for (j = 0; j < d; j++) {
            for (k = 0; k < b; k++) {
                Z[i][j] += X[i][k] * Y[k][j];
            }
        }
    }

    // Output 
    for (i = 0; i < a; i++) {
        for (j = 0; j < d; j++) {
            printf("%d", Z[i][j]);
            if (j < d-1) {
                printf(" ");
            } else {
                printf("\n");
            }
        }
    }

    return 0;
}