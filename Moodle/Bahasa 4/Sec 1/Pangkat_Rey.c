/*
Program		: Pangkat_Rey.c
Description	: Power number using modular programming
Author		: Rey Rizki
Date		: 22 November 2019
Time        : 1:25 P.M. to 1:32 P.M.
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>

// Power function
int powah(int basic, int power);

// Multiply function
int multiply(int multiplied, int multiplier);

int main() {
    // DECALARATION
    int number1, number2;                       // input

    // INPUT 
    scanf("%d %d", &number1, &number2);

    // OUTPUT
    printf("%d\n", powah(number1, number2));

    return 0;
}

int powah(int basic, int power) {
    if (power == 0) {
        return 1;
    } else {
        return multiply(basic, powah(basic, power-1));
    }
}

int multiply(int multiplied, int multiplier) {
    if (multiplier == 0) {
        return 0;
    } else {
        if (multiplier > 0) {
            return (multiplied + multiply(multiplied, multiplier-1));
        } else if (multiplier < 0) {
            return (-1 * (multiplied + multiply(multiplied, -multiplier-1)));
        }
        
    }
}