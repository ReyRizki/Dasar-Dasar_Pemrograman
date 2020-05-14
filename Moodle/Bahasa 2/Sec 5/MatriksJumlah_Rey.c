/*
Program		: MatriksJumlah_Rey.c
Deskripsi	: Menghitung jumlah 2 matriks
Author		: Rey Rizki
Tanggal		: 1 November 2019
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>

int main() {
    // Declaration
    int A[3][3], B[3][3];           // the 2 dimention array for input
    int C[3][3];                    // the 2 dimention array for output
    int i, j;                       // for iteration, as usual

    // Input and Process
    // Inputing the A matrix
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    // Inputing the B matrix and summing Array A and B
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Output
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d", C[i][j]);
            if (j < 2) {
                printf(" ");
            } else if (j == 2) {
                printf("\n");
            }
        }
    }
    
    return 0;
}