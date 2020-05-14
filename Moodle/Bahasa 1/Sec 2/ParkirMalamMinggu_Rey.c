/*
Program		: ParkirMalamMinggu_Rey.c
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
	
	totalBiaya = 0;
	if (waktu < 24) {
		switch(jenisKendaraan) {
		case 1:
			if (waktu <= 5) {
				totalBiaya = 1500 * waktu;	
			} else {
				totalBiaya = 5 * 1500 + (2000 * (waktu - 5));
			}
			break;
		
		case 2:
			if (waktu <= 5) {
				totalBiaya = 1000 * waktu;	
			} else {
				totalBiaya = 5 * 1000 + (1500 * (waktu - 5));
			}
			break;
		}
		
		printf("%d\n", totalBiaya);
	} else {
		printf("disegel\n");
	}
	
	return 0;
}
