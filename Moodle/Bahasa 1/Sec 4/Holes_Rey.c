/*
Program		: Holes_Rey.c
Deskripsi	: Menghitung huruf-huruf yang bolong
Author		: Rey Rizki
Tanggal		: 19 Oktober 2019
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>
#include <string.h>

int main() {
    // Declaration
    char teksKapital[50];
    int lubang, i;

    // Process
    fgets(teksKapital, 50, stdin);

    lubang = 0;

    for (i = 0; i <= strlen(teksKapital); i++) {
        switch (teksKapital[i]) {

            // for 1 hole
            case 'A':
            case 'D':
            case 'O':
            case 'P':
            case 'Q':
            case 'R':
                lubang++;
                break;

            // for 2 holes
            case 'B': 
                lubang += 2;
                break;

            // doesn't have any holes
            default:
                lubang += 0;
                break;
        }
    }

    printf("%d\n", lubang);

    return 0;
}