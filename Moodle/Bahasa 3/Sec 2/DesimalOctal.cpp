/*
Program		: BinerDesimal_Rey.c
Description	: Convert decimal to hexadecimal number
Author		: Rey Rizki
Date		: 5 November 2019
Time        : 10:29 to
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>
#include <string.h>

int main() {
    // Declaration
    unsigned long long int X;                      // for input
    int binary[31];             // for output
    int i;                      // for iteration, as usual
	int length;
	
    // Input
    scanf("%llu", &X);

    // Process
    i = 0;
    while (X > 0) {
        binary[i] = X % 8;
        X = X / 8;
        i++;
    }
    length = i;

    for (i = length-1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
