/*
Program		: BinerDesimal_Rey.c
Description	: Convert decimal to hexadecimal number
Author		: Rey Rizki
Date		: 5 November 2019
Time        : 9:25 AM to 
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>
#include <string.h>

int main() {
    // Declaration
    unsigned long long int decimal;             // for input
    char hexadecimal[31];                       // for output
    int i;                                      // for iteration, as usual
    int digit;                                  // the digits of hexadecimal

    // Input 
    scanf("%llu", &decimal);

    // Process
    i = 0;
    while (decimal != 0) {
        switch (decimal % 16) {
            case 0:
                hexadecimal[i] = '0';
                break;
            case 1:
                hexadecimal[i] = '1';
                break;
            case 2:
                hexadecimal[i] = '2';
                break;
            case 3:
                hexadecimal[i] = '3';
                break;
            case 4:
                hexadecimal[i] = '4';
                break;
            case 5:
                hexadecimal[i] = '5';
                break;
            case 6:
                hexadecimal[i] = '6';
                break;
            case 7:
                hexadecimal[i] = '7';
                break;
            case 8:
                hexadecimal[i] = '8';
                break;
            case 9:
                hexadecimal[i] = '9';
                break;
            case 10:
                hexadecimal[i] = 'A';
                break;
            case 11:
                hexadecimal[i] = 'B';
                break;
            case 12:
                hexadecimal[i] = 'C';
                break;
            case 13:
                hexadecimal[i] = 'D';
                break;
            case 14:
                hexadecimal[i] = 'E';
                break;
            case 15:
                hexadecimal[i] = 'F';
                break;
        }
        decimal = decimal/16;
        i++;
    }
    
    digit = i;
    for (i = digit-1; i >= 0; i--) {
        printf("%c", hexadecimal[i]);
    }

    printf("\n");

    return 0;
}