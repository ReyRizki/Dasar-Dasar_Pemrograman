/*
Program		: CountPrima_Rey.c
Deskripsi	: Menghitung banyaknya bilangan prima
Author		: Rey Rizki
Tanggal		: 20 Oktober 2019
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    // DECLARATION
    int number[10];
    int i, j, countPrime;
    bool prime;

    // PROCESS
    // input
    for (i = 0; i <= 9; i++) {
        scanf("%d", &number[i]);
    }

    // counting
    countPrime = 0;
    for (i = 0; i <= 9; i++) {
        // checking
        prime = true;

        if (number[i] < 2) {
            prime = false;
        } else if (number[i] == 2) {
            prime = true;
        } else {
            j = 2;
            while ((j * j <= number[i]) && prime) {
                if (number[i] % j == 0) {
                    prime = false;
                }

                j++;
            }
        }

        if (prime) {
            countPrime++;
        }
    }

    // output
    printf("%d\n", countPrime);
    
    /*
    for (i = 0; i <= 9; i++) {
        printf("%d", Number[i]);
    }
    */

    return 0;
}