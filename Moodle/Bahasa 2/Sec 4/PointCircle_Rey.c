/*
Program		: PointCircle_Rey.c
Deskripsi	: Menentukan posisi suatu titik terhadap lingkaran
Author		: Rey Rizki
Tanggal		: 31 Oktober 2019
Compiler	: gcc Ubuntu 7.4.0
*/

#include <stdio.h>
#include <math.h>

// point declaration
struct point {
    /* data */
    double x;
    double y;
};

int main() {
    // Declaration
    struct point circleCenter, finding;

    double r;                  // radius of the circle
    
    // Input
    scanf("%lf %lf", &circleCenter.x, &circleCenter.y);
    scanf("%lf", &r);
    scanf("%lf %lf", &finding.x, &finding.y);

    // Process
    if ((finding.x - circleCenter.x) * (finding.x - circleCenter.x) + (finding.y - circleCenter.y) * (finding.y - circleCenter.y) < r * r) {
        if ((finding.x == circleCenter.x) && (finding.y == circleCenter.y)) {
            printf("tepat pada titik pusat\n");
        } else {
            printf("di dalam lingkaran\n");
        }
    } else if ((finding.x - circleCenter.x) * (finding.x - circleCenter.x) + (finding.y - circleCenter.y) * (finding.y - circleCenter.y) == r * r) {
        printf("tepat pada lingkaran\n");
    } else {
        printf("di luar lingkaran\n");
    }

    return 0;
}