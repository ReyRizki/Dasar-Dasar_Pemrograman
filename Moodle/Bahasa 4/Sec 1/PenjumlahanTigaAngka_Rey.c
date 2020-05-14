/*
Program		: PenjumlahanTigaAngka_Rey.c
Description	: Summing three numbers
Author		: Rey Rizki
Date		: 22 November 2019
Time        : 10:32 A.M. to 10:37 A.M.
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>

// Module Prototype
int summingThree(int num1, int num2, int num3);

int main() {
    // DECLARATION
    int number1, number2, number3;                  // The input variable
    int total;                                      // Sum of the inputs

    // INPUT 
    scanf("%d %d %d", &number1, &number2, &number3);

    // PROCESS
    total = summingThree(number1, number2, number3);

    // OUTPUT
    printf("%d\n", total);

    return 0;
}

// Body of the function
int summingThree(int num1, int num2, int num3) {
    // DECLARATION
    int sum;                                        // for OUTPUT

    // PROCESS
    sum = num1 + num2 + num3;

    // OUTPUT
    return sum;   
}