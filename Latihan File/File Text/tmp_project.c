/* -----------------------------------------------
Program 		: search_text.c
Deskripsi		: Mencari kata pada File Text
Author 			: Rey Rizki
Versi/tanggal	: 20/12/2019
Compiler 		: gcc Ubuntu
---------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct lyrics {
	char kywrd[20];
	char txt[512];
	int line;
};

FILE* open_file(char file_name[], char mode[]) {
	FILE *fp = fopen(file_name, mode);
	
	if(fp == NULL) {
		perror("File tidak dapat ditemukan.\n");
		exit(EXIT_FAILURE);
	}
	
	return fp;
}

void read_text(FILE* fp) {
	char ch[512];
	printf("Isi file:\n");
	while((fgets(ch, 512, fp)) != NULL) {
		printf("%s", ch);
	}
}

void search_text(FILE* f, char key[]) {
	char text[512];
	int len;
	int i;
	FILE *jiah;
	struct lyrics lyr;
	int ditemukan = 0;

	printf("\nMencari kata '%s'\n", key);
	lyr.line = 1;	
	strcpy(lyr.kywrd, key);
	len = strlen(key);
	for (i = 0; i < len; i++) {
		key[i] = tolower(key[i]);
	}

	jiah = fopen("result.dat", "wb");
	while (fgets(text, 512, f) != NULL) {
		strcpy(lyr.txt, text);
		len = strlen(text);
		for (i = 0; i < len; i++) {
			text[i] = tolower(text[i]);
		}

		if (strstr(text, key)) {
			printf("Kata %s ditemukan pada baris ke-%d: \n", lyr.kywrd, lyr.line);
			printf("%s\n", lyr.txt);
			ditemukan++;
			fwrite(&lyr, sizeof(lyr), 1, jiah);
			//fprintf(jiah, "%s %d %s", lyr.kywrd, lyr.line, lyr.txt);
		}
		lyr.line++;
	}

	if (ditemukan == 0) {
		printf("Kata '%s' tidak ditemukan\n", key);
	}

	fclose(jiah);
}


int main(){
	FILE* file;
	char filename[30], keyword[20];

	printf("Lokasi File: ");
	scanf("%s", filename);

	file = open_file(filename, "r");
	read_text(file);
	
	fclose(file);

	file = open_file(filename, "r");
	printf("\nCari Kata: ");
	scanf("%s", keyword);

	search_text(file, keyword);
	fclose(file);

	return 0;
}
