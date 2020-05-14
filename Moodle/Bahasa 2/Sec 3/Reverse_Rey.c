/*
Program		: Reverse_Rey.c
Deskripsi	: Membalik string
Author		: Rey Rizki
Tanggal		: 31 Oktober 2019
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>
#include <string.h>

int main() {
    // Declaration
    char text[10];      // this is the string that will be reversed
    int i;              // for iteration, as usual

    // Input
    gets(text);

    // Output
    for (i = strlen(text) - 1; i >= 0; i--) {
        printf("%c", text[i]);
    }
    printf("\n");

    return 0;
}