/*
Program		: RomanToDecimal_Rey.c
Description	: Convert roman number to decimal
Author		: Rey Rizki
Date		: 6 November 2019
Time        : 4:56 P.M. to 
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>
#include <string.h>

int main() {
    // Declaration
    char roman[16];                           // for the roman number
    int i;                                    // for iteration, as usual
    int decimal = 0;                          // for decimal number, the output too

    // Input
    fgets(roman, 16, stdin);

    // Process
    i = 0;
    while (i < strlen(roman) - 1) {
        if (roman[i] == 'I') {
            decimal++;
            i++;
            if (roman[i+1] == 'I') {
                decimal++;
                i++;
                if (roman[i + 2] == 'I') {
                    decimal ++;
                    i++;
                }
            } else if (roman[i+1] == 'V') {
                decimal += 3;
                i += 2;
            }
        }
    }

    // Output
    printf("%d\n", decimal);

    return 0;
}