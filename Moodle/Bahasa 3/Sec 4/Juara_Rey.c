/*
Program		: Juara_Rey.c
Description	: The champions of chess and badminton
Author		: Rey Rizki
Date		: 16 November 2019
Time        : 5:02 P.M. to 5:52 P.M., 9:03 P.M. to 9:31 P.M.
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct champion {
    char name[5][101];                              // name of the champion
    int count;                                      // the champion numbers
};

int main() {
    // DECLARATION
    struct champion chess, badminton;               // the sport
    int i, j;                                       // for iteration, as usual
    char amphibi[5][101];                           // the champions that win both chess and badminton championship
    bool exist;                                     // for escape
    int countChampion;                              // counting the champion
    char temp[101] = "teuing";                      // temporary

    // INPUT
    // Inputting the chess datas
    scanf("%d\n", &chess.count);

    for (i = 0; i < chess.count; i++) {
        scanf("%[^\n]%*c", &chess.name[i]);
        //gets(chess.name[i]);
        //fgets(chess.name[i], 101, stdin);
    }

    // Inputting the badminton datas
    scanf("%d\n", &badminton.count);

    for (i = 0; i < badminton.count; i++) {
        scanf("%[^\n]%*c", &badminton.name[i]);
        //gets(badminton.name[i]);
        //fgets(badminton.name[i], 101, stdin);
    }

    // PROCESS
    // checking if a champion wins both chess and badminton
    countChampion = 0;
    for (i = 0; i < chess.count; i++) {
        exist = false;
        j = 0;
        while (!exist && j < badminton.count) {
            if (strcmp(chess.name[i], badminton.name[j]) == 0) {
                strcpy(amphibi[countChampion], chess.name[i]);
                countChampion++;
                exist = true;
            } else {
                j++;
            }
        }
    }

    // sorting the name of the champions
    for (i = 0; i < countChampion; i++) {
        for (j = countChampion - 1; j > 0; j--) {
            if (strcmp(amphibi[j], amphibi[j-1]) > 0) {
                strcpy(temp, amphibi[j]);
                strcpy(amphibi[j], amphibi[j-1]);
                strcpy(amphibi[j-1], temp);
            }
        }
    }
    
    //printf("%d\n", countChampion);
    // OUTPUT
    if (countChampion == 0) {
        printf("tidak ada sang juara\n");
    } else {
        for (i = 0; i < countChampion; i++) {
            printf("%s\n", amphibi[i]);
        }
    }

    //printf("%d", strcmp(amphibi[0], amphibi[1]));

    return 0;
}