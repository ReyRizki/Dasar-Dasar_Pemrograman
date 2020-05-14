/*
Program		: Ganjil2D_Rey.c
Deskripsi	: Menghitung banyak bilangan ganjil dalam array 2 dimensi
Author		: Rey Rizki
Tanggal		: 1 November 2019
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>

int main() {
    // Declaration
    int X[4][4];            // the 2 dimention array
    int i, j;               // for iteration as usual
    int oddCount;           // for counting the odd numbers

    // Input and Process
    oddCount = 0;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &X[i][j]);
            if (X[i][j] % 2 != 0) {
                oddCount++;
            }
        }
    }

    // Output
    printf("%d\n", oddCount);

    return 0;
}