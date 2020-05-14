/*
Program		: KelerengMudah_Rey.c
Deskripsi	: Memberikan output warna-warna kelereng
Author		: Rey Rizki
Tanggal		: 24 Oktober 2019
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>
#include <string.h>

int main() {
    // Declaration
    int i;
    char W[5];

    // Process
    scanf("%s", W);

    for (i = 0; i < 5; i++) {
        if (W[i] == 'M') {
            printf("Merah");
        } else if (W[i] == 'B') {
            printf("Biru");
        } else if (W[i] == 'K') {
            printf("Kuning");
        }

        if (i < 4) {
            printf(" ");
        } else {
            printf("\n");
        }
    }

    return 0;
}