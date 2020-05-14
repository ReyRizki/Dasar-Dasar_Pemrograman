/*
Program		: MenukarDuaAngka_Rey.c
Description	: Swapping two numbers
Author		: Rey Rizki
Date		: 22 November 2019
Time        : 10:41 A.M. to 10:46 A.M.
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>

// Module Prototype
void swap(int *val1, int *val2);

int main() {
    // DECLARATION
    int num1, num2;                 // the input

    // INPUT 
    scanf("%d %d", &num1, &num2);

    // Process
    swap(&num1, &num2);

    // OUTPUT
    printf("%d %d\n", num1, num2);

    return 0;
}

// Function body
void swap(int *val1, int *val2) {
    int temp;                       // temporary

    temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}