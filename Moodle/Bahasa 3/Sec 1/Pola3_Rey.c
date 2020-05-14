/*
Program		: Pola3_Rey.c
Description	: Making pattern 3
Author		: Rey Rizki
Date		: 3 November 2019
Time        : 1:37 PM to 1:45 PM
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>

int main() {
    // Declaration
    int i, j;               // for iteration, as usual
    int N;                  // for input
    int count = 0;          // for counting, the ouput too!

    // Input
    scanf("%d", &N);

    // Process and output
    for (i = 0; i < N; i++) {
        for (j = 0; j < N - i; j++) {
            count++;
            printf("%d", count);
            if (j < N-i-1) {
                printf(" ");
            } else {
                printf("\n");
            }
        }
    }

    return 0;
}