/*
Program		: MaxMin_Rey.c
Description	: Finding maximum and minimum of two numbers
Author		: Rey Rizki
Date		: 22 November 2019
Time        : 2:03 P.M. to 
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>

int max(int a, int b);
int min(int c, int d);

int main() {
    // DECLARATION
    int number1, number2;                   // input number

    // INPUT 
    scanf("%d %d", &number1, &number2);

    // OUTPUT
    printf("%d %d\n", max(number1, number2), min(number1, number2));

    return 0;
}

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int min(int c, int d) {
    if (c < d) {
        return c;
    } else {
        return d;
    }
}