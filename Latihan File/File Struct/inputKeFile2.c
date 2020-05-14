#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *frec;
    char jwb;
    char enter;

    struct mahasiswa {
        char NIM[10];
        char nama[21];
        char alamat[31];
        char kota[3];
        char tgl_lahir[11];
        int tinggiBadan;
        int beratBadan;
    } mhs;

    frec = fopen("mhs.dat", "wb");
    if (frec != NULL) {
        do {
            printf("NIM             : ");
            gets(mhs.NIM);

            printf("Nama            : ");
            gets(mhs.nama);

            printf("Alamat          : ");
            gets(mhs.alamat);

            printf("Kota            : ");
            gets(mhs.kota);

            printf("Tanggal Lahir   : ");
            gets(mhs.tgl_lahir);

            printf("Tinggi Badan    : ");
            scanf("%d", &mhs.tinggiBadan);

            printf("Berat Badan     : ");
            scanf("%d%c", &mhs.beratBadan, &enter);

            fprintf(frec, "%s %s %s %s %s %d %d\n", mhs.NIM, mhs.nama, mhs.alamat, mhs.kota, mhs.tgl_lahir, mhs.tinggiBadan, mhs.beratBadan);

            printf("Mau memasukkan lagi? (Y/N) ");
            scanf("%c%c", &jwb, &enter);
        } while(jwb == 'y' || jwb == 'Y');
    } else {
        printf("Pembuatan fie gagal\n");
    }

    fclose(frec);

    return 0;
}