/*
Program		: BinerDesimal_Rey.c
Description	: Convert binary to decimal number
Author		: Rey Rizki
Date		: 4 November 2019
Time        : 9:25 PM to 10:35 PM
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>
#include <string.h>

// Power function
unsigned long long int power2(int number) {
    if (number == 0) {
        return 1;
    } else {
        return (2 * power2(number-1));
    }
}

int main () {
    // This doesn't work
    /*
    // Declaration
    unsigned long long int binary;                     // for input
    unsigned long long int decimal;               // for output
    unsigned long long int i;                          // for iteration

    // input
    scanf("%llu", &binary);

    // Process
    i = 0;
    decimal = 0;
    while (binary > 0) {
        if (binary % 10 == 1) {
            decimal += power2(i);
        } 
        
        binary = binary / 10;
        printf("%llu\n", binary);
        i++;
    }

    printf("%llu\n", decimal);

    return 0;
    */

    // Another solution
    // Declaration
    char binary[33];
    unsigned long long int decimal;
    int i;

    // Input
    fgets(binary, 33, stdin);
    
    // Process
    decimal = 0;
    for (i = strlen(binary) - 2; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += power2(strlen(binary) - 2 - i);
        }
    }
    
    // Output
    if (strlen(binary) < 33) {
        printf("%llu\n", decimal);
    } else {
        printf("%llu", power2(33) - 1);
    }
        
    return 0;
}