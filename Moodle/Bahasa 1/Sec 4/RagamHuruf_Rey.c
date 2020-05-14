/*
Program		: RagamHuruf_Rey.c
Deskripsi	: Mencetak perbedaan huruf
Author		: Rey Rizki
Tanggal		: 19 Oktober 2019
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

// function to lowercase string
void lower_string(char s[]) {
   int c = 0;
   
   while (s[c] != '\0') {
      if (s[c] >= 'A' && s[c] <= 'Z') {
         s[c] = s[c] + 32;
      }
      c++;
   }
}

int main() {
	// Declaration
	char word[26];
	// int index; 
	int i, j, count;
	// int same;
	bool same;

	// Process
	scanf("%s", &word);					// doesn't have any spaces
	//fgets(word, 26, stdin);			// with spaces (counted too)
	//scanf("%[^\n]%*c", word);			// with spaces

	// lowercasing word variable
	// using tolower() function
	/*
	for (index = 0; index < strlen(word); index++) {
		tolower(word[index]);
	}
	*/

	// using strlwr() function
	// strlwr(word);

	// using lower_string() function
	lower_string(word);

	// counting
	// using decrement
	count = strlen(word);
	for (i = 0; i <= strlen(word); i++) {
		same = false;
		j = 0;

		// checking whether it's the same letter or nah
		while ((j < i) && !same) {
			if (word[i] == word[j]) {
				same = true;
			}
			j++;
		}

		if (same == true) {
			count--;
		}
	}

	/*
	// using increment
	count = 0;
	for (i = 0; i < strlen(word); i++) {
		same = 0;
		j = 0;

		// checking whether it's the same letter or not
		while ((j < i) && same == 0) {
			if (word[i] == word[j]) {
				same = 1;
			}
			j++;
		}

		if (same == 0) {
			count++;
		}
	}
	*/

	/*
	
	// using boolean
	count = 0;
	for (i = 0; i < strlen(word); i++) {
		same = false;
		j = 0;

		// checking whether it's the same letter or not
		while ((j < i) && !same) {
			if (word[i] == word[j] || word[i] == '\0') {
				same = true;
			} else {
				j++;
			}
		}

		if (same == false) {
			count++;
		}
	}
	*/

	// printing output
	printf("%d\n", count);

	return 0;
}