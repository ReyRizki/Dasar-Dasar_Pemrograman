/*
Program		: No4_Rey.c
Description	: Counting the number without 4 last digit
Author		: Rey Rizki
Date		: 5 November 2019
Time        : 10:52 to
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>
#include <math.h>

int main() {
	// Declaration
	long int x, y;
	int count = 0;
	int i;
	
	// Input
	scanf("%ld %ld", &x, &y);
	
	// Process
	for (i = x + 1; i < y; i++) {
		if (abs(i) % 10 != 4) {
			count++;
		}
 	}
 	
 	// Output
 	printf("%d\n", count);
 	
 	return 0;
}
