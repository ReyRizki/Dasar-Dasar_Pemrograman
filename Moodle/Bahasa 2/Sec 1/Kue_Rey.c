/*
Program		: Kue_Rey.c
Deskripsi	: Mengukur kesamaan kue
Author		: Rey Rizki
Tanggal		: 25 Oktober 2019
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    // Declaration
    float N;
    char K[9];
    char L[9];
    int countK, countL;
    int i, j;
    int countSame;
    float same;
    char space = ' ';
    bool found;
    int max;

    // Process
    // Input
    scanf("%f\n", &N);

    i = 0;
    while (space != '\n') {
        scanf("%c%c", &K[i], &space);
        i++;
    }
    countK = i;

    space = ' ';
    j = 0;
    while (space != '\n') {
        scanf("%c%c", &L[j], &space);
        j++;
    }
    countL = j;

    // checking
    countSame = 0;
    for (j = 0; j < countL; j++) {
        found = false;
        i = 0;
        while (!found && (i < countK)) {
            if (L[j] == K[i]) {
                countSame++;
                found = true;
            } else {
                i++;
            }
        }
    }

    if (countK > countL) {
        max = countK;
    } else {
        max = countL;
    }
        
    // calculating
    same = (countSame * 100)/max;

    // output
    if (same >= N) {
        printf("sama\n");
    } else {
        printf("tidak sama\n");
    }

    return 0;
}