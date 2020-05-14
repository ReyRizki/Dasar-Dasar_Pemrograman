/*
Program		: MencariHuruf_Rey.c
Deskripsi	: Mencari huruf yang ada di string "JTKPolban"
Author		: Rey Rizki
Tanggal		: 19 Oktober 2019
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
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


// function to lowercase char
void lowerChar(char letter) {
    if (letter >= 'A' && letter <= 'Z') {
        letter = letter + 32;
    }
}

int main() {
    // Declaration
    char X[10] = "JTKPolban";
    char search;
    int index;
    bool found;

    // Process
    scanf("%c", &search);

    // lowercase
    lowerString(X);

    // printf("%c\n", tolower(search));
    
    // finding substring search in X
    found = false;
    index = 0;
    while (index < strlen(X) && !found) {
        if (X[index] == tolower(search)) {
            found = true;
        }

        index++;
    }

    // output
    if (found) {
        printf("ada\n");
    } else {
        printf("tidak ada\n");
    }
    

    return 0;
}