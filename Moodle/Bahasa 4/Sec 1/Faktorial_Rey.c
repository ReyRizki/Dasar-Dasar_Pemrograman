/*
Program		: Faktorial_Rey.c
Description	: Finding factorial of given number
Author		: Rey Rizki
Date		: 22 November 2019
Time        : 1:57 P.M. to 2:00 P.M.
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>

// Module header
int factorial(int N);

int main() {
    // DECLARATION
    int number;                 // input number

    // INPUT 
    scanf("%d", &number);

    // OUTPUT
    printf("%d\n", factorial(number));

    return 0;
}

int factorial(int N) {
    if (N == 0) {
        return 1;
    } else {
        return N * factorial(N-1);
    }
}