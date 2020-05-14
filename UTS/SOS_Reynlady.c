/*
Program		: SOS_Reynaldy.c
Description	: Counting score of an SOS game
Author		: Reynaldy Rizki Saputra
Date		: 8 November 2019
Time        : 8:05 A.M. to  
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>

int main() {
    // Declaration
    char board[3][3];                   // for the S or O character
    char special;                       // for space and enter
    int i, j;                           // for iteration, as usual
    int score;                          // for counting score, for the output too

    // Input
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%c%c", &board[i][j], &special);
        }
    }

    // Process
    if (board[0][1] == 'O') {
        if (board[0][0] == 'S' && board[2][2] == 'S') {
            score++;
        }
    }

    // Output 
    printf("%d", score);
}