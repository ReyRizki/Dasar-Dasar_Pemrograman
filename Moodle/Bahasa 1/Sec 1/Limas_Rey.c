/*
Program		: Limas_Rey.c
Deskripsi	: Menghitung volume limas
Author		: Rey Rizki
Tanggal		: 18 Oktober 2019
Compiler	: Dev-C++ 5.11
*/

#include <stdio.h>

int main() {
	float volume, panjang, lebar, tinggi;
	
	scanf("%f\n", &panjang);
	scanf("%f\n", &lebar);
	scanf("%f", &tinggi);
	
	volume = (panjang * lebar * tinggi)/3;
	printf("%f", volume);
	
	return 0;
}
