#include <stdio.h>

int main() {
    char nama[50];
    char fav_drink[50];
    int umur;
    char id[100];

   
    printf("Masukkan Nama            : ");
    scanf(" %[^\n]s", nama);

    printf("Masukkan Favorite Drink  : ");
    scanf(" %[^\n]s", fav_drink);

    printf("Masukkan Umur            : ");
    scanf("%d", &umur);

    char inisial_nama = nama[0];
    
    int len_nama = 0;
    while (nama[len_nama] != '\0') {
        len_nama++;
    }
    char akhiran_nama = nama[len_nama - 1];

    char inisial_drink = fav_drink[0];

    int op1 = 1000 - umur;
    
    int ascii_drink_uppercase = (int)inisial_drink;
    int ascii_drink_lowercase = (inisial_drink >= 'A' && inisial_drink <= 'Z') ? (inisial_drink + 32) : inisial_drink;
    int op2 = ascii_drink_uppercase + ascii_drink_lowercase;

    sprintf(id, "%c%d%d%d%c", inisial_nama, op1, umur, op2, akhiran_nama);

    printf("\n-----------------------------------------\n");
    printf("|                                       |\n");
    printf("|   ID            : %s\n", id);
    printf("|   Name          : %s\n", nama);
    printf("|   Favorite Food : %s\n", fav_drink);
    printf("|                                       |\n");
    printf("-----------------------------------------\n");

    return 0;
}