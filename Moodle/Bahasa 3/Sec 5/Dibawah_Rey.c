/*
Program		: Dibawah_Rey.c
Description	: Counting the values below averages
Author		: Rey Rizki
Date		: 21 November 2019
Time        : 1:43 P.M. to 1:56
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>

int main() {
    // DECLARATION
    int students;           // the students of the class
    float grades[10000];    // the grades of the students
    int i;                  // for iteration, as usual
    float total;            // the total of the grades
    float average;          // the average of the grades
    int countBelow;         // for COUNTING!
    // INPUT
    scanf("%d", &students);

    total = 0;
    for (i = 0; i < students; i++) {
        scanf("%e", &grades[i]);
        total += grades[i];
    }

    // PROCESS
    average = total/students;
    countBelow = 0;
    for (i = 0; i < students; i++) {
        if (grades[i] < average) {
            countBelow++;
        }
    }

    // OUTPUT
    printf("%d\n", countBelow);

    return 0;
}