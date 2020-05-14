#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *frec;
    char jwb;
    char enter;

    struct mahasiswa {
        char nama[20];
        char alamat[30];
        char kota[15];
        char tgl_lahir[8];
    } mhs;

    frec = fopen("mhs.dat", "wb");
    if (frec != NULL) {
        do {
            printf("Nama         : ");
            gets(mhs.nama);
            printf("Alamat       : ");
            gets(mhs.alamat);
            printf("Kota         : ");
            gets(mhs.kota);
            printf("Lahir        : ");
            gets(mhs.tgl_lahir);

            fprintf(frec, "%s %s %s %s\n", mhs.nama, mhs.alamat, mhs.kota, mhs.tgl_lahir);

            printf("Mau memasukkan lagi? (Y/N) ");
            scanf("%c%c", &jwb, &enter);
        } while(jwb == 'y' || jwb == 'Y');
    } else {
        printf("Pembuatan fie gagal\n");
    }

    fclose(frec);

    return 0;
}