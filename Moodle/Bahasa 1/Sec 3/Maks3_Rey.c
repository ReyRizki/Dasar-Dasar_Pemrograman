/*
Program		: Maks3_Rey.c
Deskripsi	: Mencari nilai dari 3 bilangan
Author		: Rey Rizki
Tanggal		: 18 Oktober 2019
Compiler	: Dev-C++ 5.11
*/

#include <stdio.h>

int main() {
	// Kamus data
	int X[3];
	int max, i;
	
	// Algoritma
	for (i = 0; i < 3; i++) {
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
