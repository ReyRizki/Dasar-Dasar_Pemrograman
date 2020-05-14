#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *frec;

    struct mahasiswa {
        char NIM[10];
        char nama[21];
        char alamat[31];
        char kota[3];
        char tgl_lahir[11];
        int tinggiBadan;
        int beratBadan;
    } mhs;

    frec = fopen("mhs.dat", "rb");
    if (frec == NULL) {
        printf("Gak bisa dibuka anjay\n");
    } else {
        printf("Nama, Alamat, Kota, Tanggal Lahir\n");
        while (!feof(frec)) {
            fscanf(frec, "%s %s %s %s %s %d %d\n", mhs.NIM, mhs.nama, mhs.alamat, mhs.kota, mhs.tgl_lahir, &mhs.tinggiBadan, &mhs.beratBadan);
            printf("%s %s %s %s %s %d %d\n", mhs.NIM, mhs.nama, mhs.alamat, mhs.kota, mhs.tgl_lahir, mhs.tinggiBadan, mhs.beratBadan);
        }
    }

    return 0;
}