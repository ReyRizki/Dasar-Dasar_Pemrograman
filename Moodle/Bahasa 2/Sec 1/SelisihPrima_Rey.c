/*
Program		: SelisihPrima_Rey.c
Deskripsi	: Menghitung selisih bilangan prima terbesar dan terkecil antara X dan Y
Author		: Rey Rizki
Tanggal		: 20 Oktober 2019
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    // DECLARATION
    int X, Y;
    int minPrime, maxPrime;
    int i;
    bool prime, temp;

    // PROCESS
    scanf("%d %d", &X, &Y);

    // finding minPrime
    if (X == 2) {
        minPrime = 2;
    } else {
        prime = false;
        while (!prime) {
            i = 2;
            temp = true;
            while (i * i <= X && temp) {
                if (X % i == 0) {
                    temp = false;
                }
                i++;
            }
            
            if (temp) {
                prime = true;
            }
            
            if (prime) {
                minPrime = X;
            } else {
                X++;
            }
        }
    }

    // finding maxPrime
    if (Y == 2) {
        maxPrime = 2;
    } else {
        prime = false;
        while (!prime) {
            i = 2;
            temp = true;
            while (i * i <= Y && temp) {
                if (Y % i == 0) {
                    temp = false;
                }
                i++;
            }
            
            if (temp) {
                prime = true;
            }
            
            if (prime) {
                maxPrime = Y;
            } else {
                Y--;
            }
        }
    }

    // output
    printf("%d\n", (maxPrime - minPrime));
    //printf("%d\n", minPrime);
    //printf("%d\n", maxPrime);

    return 0;
}