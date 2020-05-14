/*
Program		: KueLagi_Rey.c
Description	: Measuring the sameness of 2 cakes compositions
Author		: Rey Rizki
Date		: 15 November 2019
Time        : 4:56 P.M. to 5.37 P.M.
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    // Declaration
    float percentage;                   // The percentage expected
    // The cake can have 8 ingredients and the ingredients can contain 10 letters
    char cake1[8][11];                  // First cake
    char cake2[8][11];                  // Second cake
    int ingredients1, ingredients2;     // the ingredients
    int i, j;                           // for iteration, as usual
    int countSame;                      // Counting the same ingredients                      
    float same;                         // The percentage, actually
    bool found;                         // To stop an iteration
    int max;                            // To find the max ingredients

    // Input
    scanf("%f\n", &percentage);
    
    // Inputting cake1
    scanf("%d\n", &ingredients1);

    // The ingredients of cake1
    for (i = 0; i < ingredients1; i++){
        fgets(cake1[i], 11, stdin);
    }

    // Inputting cake2
    scanf("%d\n", &ingredients2);

    // The ingredients of cake2
    for (i = 0; i < ingredients2; i++){
        fgets(cake2[i], 11, stdin);
    }

    // Process
    countSame = 0;
    for (j = 0; j < ingredients2; j++) {
        found = false;
        i = 0;
        while (!found && (i < ingredients1)) {
            if (strcmp(cake2[j], cake1[i]) == 0) {
                countSame++;
                found = true;
            } else {
                i++;
            }
        }
    }

    if (ingredients1 >= ingredients2) {
        max = ingredients1;
    } else {
        max = ingredients2;
    }
        
    // calculating
    same = (countSame * 100)/max;

    // output
    if (same >= percentage) {
        printf("sama\n");
    } else {
        printf("tidak sama\n");
    }

    return 0;
}