#include <stdio.h>
#include <string.h>

struct kbbi
{
    char baku[20];
    char tidakBaku[20];
};

int main()
{
    FILE* KBBI;
    struct kbbi kata;
    int i;

    KBBI = fopen("kbbi.dat", "rb");

    fread(&kata, sizeof(struct kbbi), 1, KBBI);
    i = 0;
    while (!feof(KBBI))
    {
        printf("%d ", i+1);
        printf("%s %s\n", kata.baku, kata.tidakBaku);
        fread(&kata, sizeof(struct kbbi), 1, KBBI);
        i++;
    }

    fclose(KBBI);

    return 0;
}