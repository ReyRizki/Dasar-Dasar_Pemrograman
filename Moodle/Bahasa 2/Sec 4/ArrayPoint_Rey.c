/*
Program		: ArrayPoint_Rey.c
Deskripsi	: Memeriksa apakah 2 array bertipe data point merupakan array yang sama atau bukan
Author		: Rey Rizki
Tanggal		: 31 Oktober 2019
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>
#include <stdbool.h>

// point declaration
struct point {
    /* data */
    int x;
    int y;
};

int main() {
    // Declaration
    struct point M[5];
    struct point N[5];
    bool same;
    int i;                  // for iteration as usual

    // Input and process
    same = true;

    for (i = 0; i < 10; i++) {
        if (i < 5) {
            scanf("%d %d", &M[i].x, &M[i].y);
        } else {
            scanf("%d %d", &N[i-5].x, &N[i-5].y);
            if ((M[i-5].x != N[i-5].x) || (M[i-5].y != N[i-5].y)) {
                same = false;
            }
        }
    }

    // Output
    if (same) {
        printf("sama\n");
    } else {
        printf("tidak sama\n");
    }

    return 0;
}