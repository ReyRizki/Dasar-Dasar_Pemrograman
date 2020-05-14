#include <string.h>
#include <stdio.h>
#include <ctype.h>

char ngaleutikan(char sentence[]) {
	int len;
	int i;
    char kata[5];
	len = strlen(sentence);

	for (i = 0; i < len; i++) {
		kata[i] = tolower(sentence[i]);
	}

    return 'a';
}

int main() {
    char word[5];

    gets(word);

    printf("%c\n", ngaleutikan(word));

    return 0;
}