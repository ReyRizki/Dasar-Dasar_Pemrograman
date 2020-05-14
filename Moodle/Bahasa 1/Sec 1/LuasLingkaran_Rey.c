/*
Program		: LuasLingkaran_Rey.c
Deskripsi	: Menghitung luas lingkaran
Author		: Rey Rizki
Tanggal		: 18 Oktober 2019
Compiler	: Dev-C++ 5.11
*/

#include <stdio.h>
#include <math.h>

#define PI 3.14

int main() {
	// Kamus data
	float luas, r;
	
	// Algoritma
	scanf("%f", &r);
	
	luas = PI * r * r;
	
	printf("%.2f\n", luas);
	
	return 0;
}
