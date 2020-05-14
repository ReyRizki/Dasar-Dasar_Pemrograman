/*
Program		: Vokal_Rey.c
Deskripsi	: Menecek huruf vokal atau konsonan
Author		: Rey Rizki
Tanggal		: 18 Oktober 2019
Compiler	: Dev-C++ 5.11
*/

#include <stdio.h>

int main() {
	// Declaration
	char huruf;
	int vokal;
	
	// Algorithm
	scanf("%c", &huruf);
	
	switch (huruf) {
		case 'A':
		case 'a':
		case 'I':
		case 'i':
		case 'U':
		case 'u':
		case 'E':
		case 'e':
		case 'O':
		case 'o':
			vokal = 1;
			break;
			
		default:
			vokal = 0;
			break;
	}
	
	if (vokal == 1) {
		printf("true\n");
	} else {
		printf("false\n");
	}
	
	return 0;
}
