/*
Program		: Kelipatan34_Rey.c
Deskripsi	: Mengecek input merupakan kelipatan 3 dan 4
Author		: Rey Rizki
Tanggal		: 18 Oktober 2019
Compiler	: Dev-C++ 5.11
*/

#include <stdio.h>

int main() {
	// Kamus data
	int angka, cek;
	
	// Algoritma
	scanf("%d", &angka);
	
	if (angka % 12 == 0) {
		cek = 1;
	} else {
		cek = 0;
	}
	
	printf("%d\n", cek);
	
	return 0;
}
