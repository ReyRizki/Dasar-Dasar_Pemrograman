/*
Program		: FillPointKuadran_Rey.c
Deskripsi	: Menghitung banyak titik dalam 1 kuadran dan menuliskan tiitk-titik tersebut
Author		: Rey Rizki
Tanggal		: 1 November 2019
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>

// point declaration
struct point {
    /* data */
    int x;
    int y;
};

int main() {
    // Declaration
    struct point P[10];             // P stands for point, LOL
    struct point Q[10];             // Array for the points that are in quadrant N
    int M;                          // how many points will we count?
    int N;                          // the quadrant
    int count = 0;                  // just for counting, as usual
    int i;                          // for iteration, as usual

    // Input
    scanf("%d", &M);

    for (i = 0; i < M; i++) {
        scanf("%d %d", &P[i].x, &P[i].y);
    }

    scanf("%d", &N);

    // Process
    for (i = 0; i < M; i++) {
        switch (N) {
            // quadrant 1
            case 1:
                if ((P[i].x >= 0) && (P[i].y >= 0)) {
                    Q[count].x = P[i].x;
                    Q[count].y = P[i].y;   
                    count++;
                }
                break;

            // quadrant 2
            case 2:
                if ((P[i].x <= 0) && (P[i].y >= 0)) {
                    Q[count].x = P[i].x;
                    Q[count].y = P[i].y;
                    count++;
                }
                break;

            // quadrant 3
            case 3:
                if ((P[i].x <= 0) && (P[i].y <= 0)) {
                    Q[count].x = P[i].x;
                    Q[count].y = P[i].y;
                    count++;
                }
                break;
            
            // quadrant 4
            case 4:
                if ((P[i].x >= 0) && (P[i].y <= 0)) {
                    Q[count].x = P[i].x;
                    Q[count].y = P[i].y;
                    count++;
                }
                break;    
        }
    }

    // Output
    printf("%d\n", count);
    
    for (i = 0; i < count; i++) {
        printf("%d %d\n", Q[i].x, Q[i].y);
    }

    return 0;
}