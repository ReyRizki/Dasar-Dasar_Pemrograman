/*
Program		: KelerengSedang_Rey.c
Deskripsi	: Menghitung kelereng berwarna merah dan biru
Author		: Rey Rizki
Tanggal		: 24 Oktober 2019
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    // Declaration
    int N, i;
    char W[15];
    int countM, countB, countK;
    countM = 0;
    countB = 0;

    // Process
    scanf("%d\n", &N);
    scanf("%s", W);

    for (i = 0; i <= N; i++) {
        if (W[i] == 'M') {
            countM++;
        } else if (W[i] == 'B') {
            countB++;
        }
    }

    printf("%d\n%d\n", countM, countB);

    return 0;
}