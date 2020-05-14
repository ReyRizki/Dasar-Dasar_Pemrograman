#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

struct kbbi
{
    char baku[20];                      // kata yang baku
    char tidakBaku[20];                 // kata yang tidak baku
};

bool isBaku(char* w)
{
    // DATA STRUCTURE
    FILE* dictionary;                   // untuk membuka file kbbi.dat
    struct kbbi kata;                   // input kata dari record
    int i;
    int len;
    bool same;

    // ALGORITHM
    len = strlen(w);
    
    dictionary = fopen("kbbi.dat", "rb");

    fread(&kata, sizeof(struct kbbi), 1, dictionary);
    while (!feof(dictionary))
    {
        len = (strlen(w) >= strlen(kata.tidakBaku) ? strlen(w) : strlen(kata.tidakBaku));

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
            return false;
        }

        fread(&kata, sizeof(struct kbbi), 1, dictionary);
    }

    fclose(dictionary);

    return true;
}

int main()
{
    char kata[20];

    scanf("%s", kata);

    if (isBaku(kata))
    {
        printf("Baku\n");
    }
    else
    {
        printf("Tidak baku\n");
    }   
}