#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct mahasiswa {
    char NIM[10];
    char nama[21];
    char asalKota[21];
    char tanggalLahir[11];
};

// prosedur untuk mengisi file
// inital state: file kosong
// final state: file terisi
void input() {
    // DECLARATION
    FILE *coming;
    struct mahasiswa mhs;
    int N;
    int i;
    char enter;

    // ALGORITHM
    coming = fopen("mhs.dat", "wb");
    printf("Banyak mahasiswa = ");
    scanf("%d%c", &N, &enter);
    for (i = 0; i < N; i++) {
        printf("Mahasiswa ke-%d:\n", i+1);
        printf("NIM                 : ");
        gets(mhs.NIM);
        
        printf("Nama                : ");
        gets(mhs.nama);
        
        printf("Kota                : ");
        gets(mhs.asalKota);

        printf("Tanggal Lahir       : ");
        gets(mhs.tanggalLahir);

        fprintf(coming, "%s %s %s %s\n", mhs.NIM, mhs.nama, mhs.asalKota, mhs.tanggalLahir);
    }

    fclose(coming);
}

// prosedur untuk menampilkan data di file 
// initial state: layar kosong
// final state: layar menampilkan isi file
void show() {
    // DECLARATION
    FILE *coming;
    struct mahasiswa mhs;

    // ALGORITHM
    coming = fopen("mhs.dat", "rb");
    while (!feof(coming)) {
        fscanf(coming, "%s %s %s %s\n", mhs.NIM, mhs.nama, mhs.asalKota, mhs.tanggalLahir);
        printf("%s %s %s %s\n", mhs.NIM, mhs.nama, mhs.asalKota, mhs.tanggalLahir);
    }
}

// prosedur untuk mencari data dalam file
// initial state: data belum ditemuukan
// final state: data ditemukan
void search() {
    // DECLARATION
    FILE *coming;
    struct mahasiswa mhs;
    bool found;
    char findNIM[10];

    // ALGORITHM
    printf("Masukkan NIM mahasiswa yang ingin Anda cari: ");
    gets(findNIM);

    coming = fopen("mhs.dat", "rb");
    
    found = false;
    while (!found && !feof(coming)) {
        fscanf(coming, "%s %s", mhs.NIM, mhs.nama);
        if (strcmp(findNIM, mhs.NIM) == 0) {
            found = true;
        }
    }

    if (found) {
        printf("%s\n", mhs.nama);
    } else {
        printf("Maaf, mahasiswa yang Anda cari tidak ditemukan\n");
    }

    fclose(coming);
}

// prosedur untuk melakukan sorting terhadap isi file
// initial state: data dalam file belum terurut
// final state: data dalam file terurut
void sort() {
    // DECLARATION
    FILE *coming;
    struct mahasiswa mhs[50], structTemp;
    int i, j;
    int N;
    char temp[10];

    // ALGORITHM
    coming = fopen("mhs.dat", "rb");
    
    N = 0;
    while (!feof(coming)) {
        fscanf(coming, "%s %s %s %s\n", mhs[N].NIM, mhs[N].nama, mhs[N].asalKota, mhs[N].tanggalLahir);
        //printf("%s %s %s %s\n", mhs[N].NIM, mhs[N].nama, mhs[N].asalKota, mhs[N].tanggalLahir);
        N++;
    }

    //printf("%d\n", N);
    /*
    for (i = 0; i < N; i++) {
        for (j = N-1; N > 0; N--) {
            if (strcmp(mhs[j].NIM, mhs[j-1].NIM) < 0) {
                strcpy(temp, mhs[j].NIM);
                strcpy(mhs[j].NIM, mhs[j-1].NIM);
                strcpy(mhs[j-1].NIM, temp);
            }
        }
    }
    */

    for (i = 0; i < N-1; i++) {
        for (j = 0; j < N-i-1; j++) {
            if (strcmp(mhs[j].NIM, mhs[j+1].NIM) > 0){
                structTemp = mhs[j];
                mhs[j] = mhs[j+1];
                mhs[j+1] = structTemp;
            }
        }
    }

    /*
    for (i = 0; i < N; i++) {
        printf("%s\n", mhs[i].NIM);
    }
    */

    fclose(coming);
    
    coming = fopen("mhs.dat", "wb");
    for (i = 0; i < N; i++) {
        fprintf(coming, "%s %s %s %s\n", mhs[i].NIM, mhs[i].nama, mhs[i].asalKota, mhs[i].tanggalLahir);
    }
    fclose(coming);

    /*
    for (i = 0; i < N; i++) {
        fprintf(ahay, "%s %s %s %s\n", mhs[i].NIM, mhs[i].nama, mhs[i].asalKota, mhs[i].tanggalLahir);
        // printf("%s %s %s %s\n", mhs[i].NIM, mhs[i].nama, mhs[i].asalKota, mhs[i].tanggalLahir);
    }

    fclose(ahay);
    */
}

int main() {
    input();
    show();
    search();
    sort();

    return 0;
}