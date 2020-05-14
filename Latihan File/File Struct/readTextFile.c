#include <stdio.h>

int main() {
    FILE *teuing;
    char c;

    teuing = fopen("contoh.dat", "rb");

    if (teuing == NULL) {
        printf("Gak bisa kebuka euy\n");
    } else {
        fscanf(teuing, "%c", &c);
        while (!feof(teuing)) {
            printf("%c", c);
            fscanf(teuing, "%c", &c);
        }
        printf("%c", c);
    }
    
    return 0;
}
