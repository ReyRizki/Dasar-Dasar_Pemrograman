/*
Program		: BiayaSetelahBunga_Rey.c
Deskripsi	: Menghitung total biaya
Author		: Rey Rizki
Tanggal		: 18 Oktober 2019
Compiler	: Dev-C++ 5.11
*/

#include <stdio.h>

int main() {
	// Kamus data
	float biayaAwal, persenBunga;
	
	// Algoritma
	scanf("%f\n", &biayaAwal);
	scanf("%f", &persenBunga);
	
	printf("%.2f", biayaAwal + ((biayaAwal * persenBunga)/100));
	
	return 0;
}
