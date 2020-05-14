/*
Program		: WujudBenda_Rey.c
Deskripsi	: Mengecek wujud benda cair atau bukan
Author		: Rey Rizki
Tanggal		: 18 Oktober 2019
Compiler	: Dev-C++ 5.11
*/

#include <stdio.h>

int main() {
	// Kamus data
	float suhu;
	
	// Algoritma
	scanf("%f", &suhu);
	
	if (suhu >= 0 && suhu <= 100) {
		printf("berwujud cair\n");
	} else {
		printf("berwujud non cair\n");
	}
	
	return 0;
}
