/*
Program		: Right_Rey.c
Deskripsi	: Mencetak N huruf terakhir
Author		: Rey Rizki
Tanggal		: 18 Oktober 2019
Compiler	: Dev-C++ 5.11
*/

#include <stdio.h>
#include <string.h>

int main() {
	// Declaration
	char S[30], terakhir[30];
	int N;
	
	// Algorithm
	scanf("%[^\n]%*c", S);
	scanf("%d", &N);
	
	strncpy(terakhir, S + (strlen(S)) - N, N);
	
	printf("%s\n", terakhir);
	
	return 0;
}
