/*
Program		: Pola4_Rey.c
Description	: Making pattern 4
Author		: Rey Rizki
Date		: 3 November 2019
Time        : 5:20 PM to 5.:28
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>

int main() {
    // Declaration
    int i, j;               // for iteration, as usual
    int B;                  // for row
    int K;                  // for coloumn
    int count = 0;          // for counting, the ouput too!
    int M[10][10];          // an array

    // Input
    scanf("%d %d", &B, &K);

    // Process
    for (i = 0; i < K; i++) {
        if (i % 2 == 0) {
            for (j = 0; j < B; j++) {
                count++;
                M[j][i] = count;
            }
        } else {
            for (j = B-1; j >= 0 ; j--) {
                count++;
                M[j][i] = count;
            }
        }  
    }

    // Output
    for (i = 0; i < B; i++) {
        for (j = 0; j < K; j++) {
            printf("%d", M[i][j]);
            if (j < K-1) {
                printf(" ");
            } else {
                printf("\n");
            }
        }
    }

    return 0;
}