/*
Program		: CountTriples_Rey.c
Deskripsi	: Menghitung banyak 3 huruf yang berurutan
Author		: Rey Rizki
Tanggal		: 31 Oktober 2019
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

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

int main() {
    // Declaration
    char text[40];                  // used for string input
    char f1, f2, f3;                // f stands for find, LOL
    int count;                      // just for counting
    int i;                          // for iteration, as usual

    // Input
    fgets(text, 40, stdin);
    scanf("%c\n", &f1);
    scanf("%c\n", &f2);
    scanf("%c", &f3);

    // Process
    // lowercasing text
    lowerString(text);

    // counting 
    count = 0;
    for (i = 0; i < strlen(text) - 2; i++) {
        if ((text[i] == tolower(f1)) && (text[i+1] == tolower(f2)) && (text[i+2] == tolower(f3)))  {
            count++;
        }
    }

    // output
    printf("%d\n", count);

    return 0;
}