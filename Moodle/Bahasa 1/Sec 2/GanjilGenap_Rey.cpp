/*
Program		: GanjilGenap_Rey.c
Deskripsi	: Mengecek input merupakan bilangan ganjil atau genap
Author		: Rey Rizki
Tanggal		: 18 Oktober 2019
Compiler	: Dev-C++ 5.11
*/

#include <stdio.h>

int main() {
	// Kamus data
	int angka;
	
	// Algoritma
	scanf("%d", &angka);
	
	if (angka % 2 == 1) {
		printf("ganjil\n");
	} else {
		printf("genap\n");
	}
	
	return 0;
}
