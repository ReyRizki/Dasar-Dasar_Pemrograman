/*
Program     : uas.c
Description : program untuk menghitung berapa banyak kata yang tidak baku dlaam teks
Author      : Reynaldy Rizki Saputra
Date        : 9/01/2020
Compiler    : gcc Ubuntu 7.4.0
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

// kamus kata baku dan tidak baku
struct kbbi
{
    char baku[20];      // kata yang baku
    char tidakBaku[20]; // kata yang tidak baku
};

// menghitung kata yang tidak baku
struct notBaku
{
    char theWord[20]; // kata tidak baku yang sudah tercatat sejauh ini
    char count;       // jumlah kata yang tidak baku tersebut
};

// MODULE DECLARATION

// fungsi untuk memeriksa apakah karakter yang masuk adalah huruf atau bukan
bool isLetter(char c);

// fungsi yang digunakan untuk memeriksa apakah suatu kata baku atau bukan
bool isBaku(char *w, int length);

// fungsi untuk membuka file
FILE *open_file(char file_name[], char mode[]);

int main()
{
    // DATA STRUCTURE
    FILE *testCase;             // untuk membuka file testcase.txt
    char fileInput[15];         // nama file input (testcase.txt)
    FILE *result;               // untuk menyimpan hasil testcase yang sudah dibuat baku
    FILE *counting;             // menyimpan record kata tidak baku dan jumlahnya
    struct notBaku counter[10]; // penyimpanan kata yang tidak baku, untuk ditampilkan ke layar
    char letter;                // input perhuruf
    int index;                  // index kata
    char newWord[20];           // input kata
    char word[20];              // kata yang diperiksa
    int i, j;                   // untuk perulangan
    bool found;                 // pencarian kata
    int recorded;               // banyak kata
    struct notBaku temp;        // untuk penukaran

    // ALGORITHM
    // membaca nama file input
    printf("File Input: ");
    scanf("%s", fileInput);

    // upacara pembukaan file
    testCase = open_file(fileInput, "r");
    result = fopen("dibakukan.txt", "w");
    counting = fopen("result.dat", "wb");

    recorded = 0;
    while (!feof(testCase))
    {
        index = 0;
        do
        {
            fscanf(testCase, "%c", &letter);
            if (isLetter(letter))
            {
                newWord[index] = letter;
                index++;
            }
        } while (isLetter(letter));

        memmove(word, newWord, sizeof(newWord));
        // printf("%s ", word);

        if (!isBaku(word, index-1))
        {
            i = 0;
            while ((!found) && (i <= recorded))
            {
                if (strcmp(word, counter[i].theWord) == 0)
                {
                    counter[i].count++;
                    found = true;
                }
                else
                {
                    i++;
                }
            }

            if (!found)
            {
                strcpy(counter[recorded].theWord, word);
                counter[recorded].count = 1;
                recorded++;
            }
        }
    }

    for (i = 0; i <= recorded; i++)
    {
        for (j = recorded; j >= i+1; j--)
        {
            if (counter[j].count > counter[j-1].count)
            {
                temp = counter[j];
                counter[j] = counter[j-1];
                counter[j-1] = temp;
            }
        }
    }

    for (i = 0; i <= recorded; i++)
    {
        printf("%s %d\n", counter[i].theWord, counter[i].count);
        fwrite(&counter[i], sizeof(struct notBaku), 1, counting);
    }

    fclose(counting);
    fclose(result);
    fclose(testCase);
}

// MODULE DEFINITION
bool isLetter(char c)
{
    return ((((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z'))) ? true : false);
}

bool isBaku(char *w, int length)
{
    // DATA STRUCTURE
    FILE *dictionary; // untuk membuka file kbbi.dat
    struct kbbi kata; // input kata dari record
    int i;
    int len;
    bool same;

    // ALGORITHM
    len = strlen(w);

    dictionary = fopen("kbbi.dat", "rb");

    fread(&kata, sizeof(struct kbbi), 1, dictionary);
    while (!feof(dictionary))
    {
        len = (length >= strlen(kata.tidakBaku) ? length : strlen(kata.tidakBaku));

        i = 0;
        same = true;

        // mencari kesamaan kata baku
        for (i = 0; i < len; i++)
        {
            if (tolower(w[i]) != tolower(kata.tidakBaku[i]))
            {
                same = false;
            }
        }

        if (same)
        {
            fclose(dictionary);
            // printf("%s", w);
            return false;
        }

        fread(&kata, sizeof(struct kbbi), 1, dictionary);
    }

    fclose(dictionary);

    return true;
}

FILE *open_file(char file_name[], char mode[])
{
    FILE *fp = fopen(file_name, mode);

    if (fp == NULL)
    {
        perror("File tidak dapat ditemukan.\n");
        exit(EXIT_FAILURE);
    }

    return fp;
}
