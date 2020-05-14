/*
Program		: Sort3Desc_Rey.c
Deskripsi	: Mengurutkan 3 bilangan secara menurun
Author		: Rey Rizki
Tanggal		: 26 Oktober 2019
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>

int main() {
    // Declaration
    int number[3];
    int temp;
    int i, j;

    // input
    for (i = 0; i < 3; i++) {
        scanf("%d", &number[i]);
    }

    // process
    for (j = 0; j < 2; j++) {
        for (i = 2; i > j; i--) {
            if (number[i] > number[i-1]) {
                temp = number[i];
                number[i] = number[i-1];
                number[i-1] = temp;
            }
        }
    }

    // output
    for (i = 0; i < 3; i++) {
        printf("%d", number[i]);

        if (i < 2) {
            printf(" ");
        } else if (i == 2) {
            printf("\n");
        }
    }

    return 0;
}