/*
Program		: CelciusToFahrenheit_Rey.c
Deskripsi	: Konversi suhu C ke F
Author		: Rey Rizki
Tanggal		: 18 Oktober 2019
Compiler	: Dev-C++ 5.11
*/

#include <stdio.h>
#include <math.h>
int main() {
	// Kamus data
	float C, F;
	
	// Algoritma
	scanf("%f", &C);
	
	F = 1.8 * C + 32;
	
	printf("%.2f\n", F);
	
	return 0;
}
