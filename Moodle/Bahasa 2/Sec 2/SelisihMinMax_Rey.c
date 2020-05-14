/*
Program		: SelisihMinMax_Rey.c
Deskripsi	: Mencari selisih maksimum dan minimum dari 10 bilangan
Author		: Rey Rizki
Tanggal		: 26 Oktober 2019
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>

int main() {
	// Declaration
	int X[10];
	int max, min, i;
    int difference;
	
	// Process
	for (i = 0; i < 10; i++) {
		scanf("%d", &X[i]);
		if (i == 0) {
            min = X[i];
			max = X[i];
		} else if (X[i] > max) {
			max = X[i];
		} else if (X[i] < min){
            min = X[i];
        }
	}
	
    difference = max - min;

    // output
	printf("%d\n", difference);
	
	return 0;
}
