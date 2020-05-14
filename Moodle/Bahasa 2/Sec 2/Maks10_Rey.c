/*
Program		: Maks10_Rey.c
Deskripsi	: Mencari nilai maksimum dari 10 bilangan
Author		: Rey Rizki
Tanggal		: 26 Oktober 2019
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>

int main() {
	// Declaration
	int X[10];
	int max, i;
	
	// Process
	for (i = 0; i < 10; i++) {
		scanf("%d", &X[i]);
		if (i == 0) {
			max = X[i];
		} else if (X[i] > max) {
			max = X[i];
		}
	}
	
	printf("%d\n", max);
	
	return 0;
}
