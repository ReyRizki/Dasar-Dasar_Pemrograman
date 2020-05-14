/*
Program		: Array2DVocal_Rey.c
Deskripsi	: Menampilkan huruf vokal yang terdapat dalam array serta index-nya
Author		: Rey Rizki
Tanggal		: 1 November 2019
Waktu       : 9.56 to 11:02
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>

struct vocal {
    char truth;         // the letter
    int x, y;           // the coordinates
};

int main() {
    // Declaration
    char letter[3][3];          // the 2 dimention array
    int i, j;                   // for iteration, as usual
    char special = ' ';         // just for space or nweline, LOL
    struct vocal considered[9]; // for the letter and coordinates that considered to be vocal
    int count;                  // for counting the vocal letters

    // Input and process
    count = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%c%c", &letter[i][j], &special);

            switch (letter[i][j]) {
                case 'A':
                case 'a':
                case 'I':
                case 'i':
                case 'U':
                case 'u':
                case 'E':
                case 'e':
                case 'O':
                case 'o':
                    considered[count].truth = letter[i][j];
                    considered[count].x = i + 1;
                    considered[count].y = j + 1;
                    count++;
                    break;
            }
        }
    }

    // Output
    if (count == 0) {
        printf("tidak ada huruf vokal\n");
    } else if (count > 0) {
        for (i = 0; i < count; i++) {
            printf("%c: (%d,%d)\n", considered[i].truth, considered[i].x, considered[i].y);
        }
    }

    return 0;
}