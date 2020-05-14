/*
Program		: BasicIO2_Rey.c
Deskripsi	: Menampilkan bilangan dari X sampai Y
Author		: Rey Rizki
Tanggal		: 18 Oktober 2019
Compiler	: Dev-C++ 5.11
*/

#include <stdio.h>

int main() {
	int X, Y, i;
	
	scanf("%d %d", &X, &Y);
	
	for (i = X; i <= Y; i++) {
		printf("%d", i);
		if (i < Y) {
			printf(" ");
		} else if (i == Y) {
			printf("\n");
		}
	}
	
	return 0;
}
