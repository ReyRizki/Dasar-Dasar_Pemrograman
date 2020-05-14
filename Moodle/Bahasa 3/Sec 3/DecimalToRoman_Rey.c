/*
Program		: DecimalToRoman_Rey.c
Description	: Convert decimal to roman number
Author		: Rey Rizki
Date		: 13 November 2019
Time        : 8:19 P.M. to 6.35 P.M.
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>
#include <string.h>

int main() {
    // Declaration
    int decimal;                // for the decimal number, the input too

    // Input
    scanf("%d", &decimal);

    // Process and Output
    while (decimal > 0) {
        if (decimal >= 1000) {
            printf("M");
            decimal -= 1000;
        } else if (decimal >= 900) {
            printf("CM");
            decimal -= 900;
        } else if (decimal >= 500) {
            printf("D");
            decimal -= 500;
        } else if (decimal >= 400) {
            printf("CD");
            decimal -= 400;
        } else if (decimal >= 100) {
            printf("C");
            decimal -= 100;
        } else if (decimal >= 90) {
            printf("XC");
            decimal -= 90;
        } else if (decimal >= 50) {
            printf("L");
            decimal -= 50;
        } else if (decimal >= 40) {
            printf("XL");
            decimal -= 40;
        } else if (decimal >= 10) {
            printf("X");
            decimal -= 10;
        } else if (decimal >= 9) {
            printf("IX");
            decimal -= 9;
        } else if (decimal >= 5) {
            printf("V");
            decimal -= 5;
        } else if (decimal >= 4) {
            printf("IV");
            decimal -= 4;
        } else if (decimal >= 1) {
            printf("I");
            decimal -= 1;
        }
    }

    printf("\n");

    return 0;
}