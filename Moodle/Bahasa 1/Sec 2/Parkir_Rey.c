/*
Program		: Parkir_Rey.c
Deskripsi	: Menghitung biaya parkir
Author		: Rey Rizki
Tanggal		: 18 Oktober 2019
Compiler	: Dev-C++ 5.11
*/

#include <stdio.h>

int main() {
	// Kamus data
	int jenisKendaraan, waktu, totalBiaya;
	
	// Algoritma
	scanf("%d\n", &jenisKendaraan);
	scanf("%d", &waktu);
	
	switch(jenisKendaraan) {
		case 1:
			totalBiaya = 2000 + (waktu -1) * 1000;
			break;
		
		case 2:
			totalBiaya = 1000 + (waktu - 1) * 500;
			break;
	}
	
	printf("%d", totalBiaya);
	
	return 0;
}
