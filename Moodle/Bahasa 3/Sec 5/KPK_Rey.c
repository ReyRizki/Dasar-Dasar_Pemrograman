/*
Program		: KPK_Rey.c
Description	: Calculate the LCM of two numbers
Author		: Rey Rizki
Date		: 21 November 2019
Time        : 2:45 P.M. to 2:52 P.M.
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>

int gcd(int a, int b) {
    if (a == 0) {
        return b;
    } else {
        return gcd(b % a, a);
    }
}

int lcm(int number1, int number2) {
    return ((number1 * number2) / gcd(number1, number2));
}

int main() {
    // DECLARATION
    int number1, number2;               // the numbers
    int remains;                        // the remains of number1 mod number2
    int temp;                           // stands for temporary

    // INPUT
    scanf("%d %d", &number1, &number2);

    // PROCESS
    if (number1 < number2) {
        temp = number1;
        number1 = number2;
        number2 = temp;
    }

    // OUTPUT
    printf("%d\n", (number1 * number2)/(gcd(number1, number2)));

    return 0;
}