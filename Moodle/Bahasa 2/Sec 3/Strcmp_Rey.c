/*
Program		: Strcmp_Rey.c
Deskripsi	: Membandingkan 2 string
Author		: Rey Rizki
Tanggal		: 27 Oktober 2019
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Finding the max length of two strings
int maxLen(int s1, int s2) {
    if (s1 > s2) {
        return (s1);
    } else if (s1 < s2) {
        return (s2);
    }
}
int main() {
    // Declaration
    char K1[11];
    char K2[11];
    bool same;
    int i;
    int difference;         // only used if string K1 != K2
    int indexDif;
    int max;

    // Input
    gets(K1);
    gets(K2);
    /*
    fgets(K1, 11, stdin);
    fgets(K2, 11, stdin);
    */

    // Process
    i = 0;
    same = true;
    difference = 0;
    max = maxLen(strlen(K1), strlen(K2));
    while ((i < max) && same) {
        if (K1[i] != K2[i]) {
            difference = K1[i] - K2[i];
            same = false;
        }

        i++;
    }

    if (same == true) {
        indexDif = 0;
    } else {
        indexDif = i++;
    }

    /*
    if (difference != 0 && indexDif == max) {
        if (K1[max] == '\n' || K2[max] == '\n') {
            if (strlen(K1) > strlen(K2)) {
                difference += 10;
            } else {
                difference -= 10;
            }
        }
    }
    */

    // Output
    if (difference > 0) {
        printf("+%d\n", difference);    
    } else {
        printf("%d\n", difference);
    }
    printf("%d\n", indexDif);

    return 0;
}