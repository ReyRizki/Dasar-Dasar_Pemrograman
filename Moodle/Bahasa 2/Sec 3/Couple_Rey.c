/*
Program		: Couple_Rey.c
Deskripsi	: Mencari 2 huruf yang berpasangan dari suatu string
Author		: Rey Rizki
Tanggal		: 27 Oktober 2019
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

// function to lowercase string
void lowerString(char s[]) {
   int c = 0;
   
   while (s[c] != '\0') {
      if (s[c] >= 'A' && s[c] <= 'Z') {
         s[c] = s[c] + 32;
      }
      c++;
   }
}

/*
// function to lowercase char
void lowerChar(char letter) {
    if (letter >= 'A' && letter <= 'Z') {
        letter = letter + 32;
    }
}
*/

int main() {
    // Declaration
    char X[10] = "JTKPolban";
    char f1, f2;                    // f stands for find, LOL
    bool exist;                     // for checking if f1 exists in X or nah
    bool nextTo = false;            // for checking if f2 is next to f1 or nah
    int i;

    // Input
    scanf("%c %c", &f1, &f2);

    // Process
    // lowercasing X
    lowerString(X);

    // lowercasing f1 and f2
    /*
    lowerChar(f1);
    lowerChar(f2);
    */

    /*
    tolower(f1);
    tolower(f2);
    printf("%c %c\n", f1, f2);
    */

    // checking if f1 exists in X or nah
    exist = false;
    i = 0;

    while ((i < strlen(X)) && !exist) {
        if (X[i] == tolower(f1)) {
            exist = true;
        } else {
            i++;
        }
    }
    // printf("%d\n", i);

    // checking if f2 is next to f1 or nah
    if (exist && tolower(X[i-1] == tolower(f2))) {
        nextTo = true;
    }

    // output
    if (exist && nextTo) {
        printf("ada\n");
    } else {
        printf("tidak ada\n");
    }

    return 0;
}