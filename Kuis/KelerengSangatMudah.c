/*
Program		: KelerengSangatMudah_Rey.c
Deskripsi	: Menentukan warna kelereng
Author		: Rey Rizki
Tanggal		: 24 Oktober 2019
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>
#include <string.h>

int main() {
    // Declaration
    char kaleci;
    
    // Process
    scanf("%c", &kaleci);

    if (kaleci == 'M') {
        printf("Kelereng Merah\n");
    } else if (kaleci == 'B') {
        printf("Kelereng Biru\n");
    } else if (kaleci == 'K') {
        printf("Kelereng Kuning\n");
    }

    return 0;
}