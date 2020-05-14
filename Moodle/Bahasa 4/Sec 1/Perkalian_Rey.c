/*
Program		: Perkalian_Rey.c
Description	: Multiply numbers using modular programming
Author		: Rey Rizki
Date		: 22 November 2019
Time        : 10:49 A.M. to 11:20 A.M.
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>

// Module header
long long int multiply(long long int multiplied, long long int multiplier);

int main() {
    // DECLARATION
    long long int num1, num2;                     // inputting variable
    long long int result;                         // output variable

    // INPUT 
    scanf("%lld %lld", &num1, &num2);

    // PROCESS
    result = multiply(num1, num2);

    // OUTPUT 
    printf("%lld\n", result);

    return 0;
}

long long int multiply(long long int multiplied, long long int multiplier) {
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