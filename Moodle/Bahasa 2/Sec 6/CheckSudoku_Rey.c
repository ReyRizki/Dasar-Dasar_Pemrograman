/*
Program		: MatriksSimetris_Rey.c
Description	: Checking if a sudoku block is valid or not
Author		: Rey Rizki
Date		: 2 November 2019 to 3 November 2019
Time        : 22:52 to 01:30
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    /*
    // Declaration
    int M[3][3];                    // The matrix itself
    int i, j;                       // for iteration, as usual
    int x, y;                       // for iteration, but the cheking part ones
    bool valid = true;              // false if not meet the requirement

    // Assigning M
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            M[i][j] = 999;
        }
    }
    
    // Input and process
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &M[i][j]);
            for (x = 0; x < 3; x++) {
                for (y = 0; y < 3; y++) {
                    if (i != x && j != y) {
                        if (M[i][j] == M[x][y]) {
                            valid = false;
                        }
                    }
                }
            }
        }
    }

    // Output
    if (valid) {
        printf("valid\n");
    } else {
        printf("tidak valid\n");
    }
    */

    // JUST ANOTHER SOLUTION
    // Declaration
    int M[9];
    int i, j;
    bool valid = true;

    // Input and process
    for (i = 0; i < 9; i++) {
        scanf("%d", &M[i]);
        for (j = 0; j < i; j++) {
            if (i != j) {
                if (M[i] == M[j]) {
                    valid = false;
                }
            }
        }
    }

    // Output
    if (valid) {
        printf("valid\n");
    } else {
        printf("tidak valid\n");
    }

    return 0;
}