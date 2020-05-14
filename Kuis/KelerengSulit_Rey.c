/*
Program		: KelerengSulit_Rey.c
Deskripsi	: Menghitung kelereng berwarna merah, biru, dan kuning.
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
    countK = 0;

    // Process
    scanf("%d\n", &N);
    scanf("%s", W);
    // scanf("%[^\n]%*c", &W);
    // fgets(W, N, stdin);

    for (i = 0; i <= N; i++) {
        if (W[i] == 'M') {
            countM++;
        } else if (W[i] == 'B') {
            countB++;
        } else if (W[i] == 'K') {
            countK++;
        }
        /*
        switch (W[i]) {
            case 'M':
                countM++;
                break;
            case 'B':
                countB++;
                break;
            case 'K':
                countK++;
                break;
        }
        */
    }

    printf("%d %d %d\n", countM, countB, countK);

    return 0;
}