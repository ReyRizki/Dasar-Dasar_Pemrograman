/*
Program		: Alay_Rey.c
Deskripsi	: Membuat teks dengan angka
Author		: Rey Rizki
Tanggal		: 18 Oktober 2019
Compiler	: Dev-C++ 5.11
*/

#include <stdio.h>
#include <string.h>
int main() {
	// Kamus data
	char A[51];
	int i;
	
	// Algoritma
	gets(A);
	
	for (i = 0; i < strlen(A); i++) {
		switch (A[i]) {
			case 'A':
			case 'a':
				A[i] = '4';
				break;
				
			case 'I':
			case 'i':
				A[i] = '1';
				break;
				
			case 'Z':
			case 'z':
				A[i] = '2';
				break;
				
			case 'E':
			case 'e':
				A[i] = '3';
				break;
				
			case 'G':
			case 'g':
				A[i] = '6';
				break;
				
			case 'J':
			case 'j':
				A[i] = '7';
				break;
				
			case 'B':
			case 'b':
				A[i] = '8';
				break;
				
			default:
				break;
		}
	}
	
	printf("%s\n", A);
	
	return 0;
}
