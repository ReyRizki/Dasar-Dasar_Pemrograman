/*
Program		: Median_Rey.c
Deskripsi	: Mencari median
Author		: Rey Rizki
Tanggal		: 26 Oktober 2019
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>
#include <math.h>

int r(float f) {
    int result = f;

    return result;
}
int main() {
    // Declaration
    int N;
    float number[20];
    int i;
    float median;

    // Input
    scanf("%d", &N);
    for (i = 0; i < N; i++){
        scanf("%f", &number[i]);
    }

    // Process
    if (N % 2 == 1) {
        median = number[r(ceil(N / 2))];
    } else if (N % 2 == 0) {
        median = (number[N / 2] + number[(N / 2) - 1])/2;
    }

    // Output
    printf("%.1f\n", median);

    return 0;
}