/*
Program		: Prima_Rey.c
Deskripsi	: Menunjukkan suatu bilangan prima atau bukan
Author		: Rey Rizki
Tanggal		: 20 Oktober 2019
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    // Declaration
    int number;
    int i;
    bool prime;

    // Process
    scanf("%d", &number);

    // checking
    prime = true;
    if (number < 2) {
        prime = false;
    } else if (number == 2) {
        prime == true;
    } else {
        i = 2;
        while ((i * i <= number) && prime) {
            if (number % i == 0) {
                prime = false;
            }

            i++;
        }
    }

    // output
    if (prime) {
        printf("prima\n");
    } else {
        printf("bukan prima\n");
    }

    return 0;
}