#include <stdio.h>
#include <stdlib.h>
#include "hastane.h"

void menu();

int main(int argc, char** argv) {
    printf("------------------------------\n");
    printf("HASTA KAYIT SISTEMI\n");
    printf("------------------------------\n");
    
    int secim;
    while(1) {
        menu();
        scanf("%d", &secim);
        switch(secim) {
            case 0:
                printf("Cikis yapiliyor...\n");
                exit(0);
                break;
            case 1:
                hastaKayit();
                break;
            case 2:
                kayitSil();
                break;
            case 3:
                hastaListele();
                break;
            default:
                printf("Girdiginiz deger gecersiz! Tekrar deneyin!\n");
                break;
        }
    }
    
    return (EXIT_SUCCESS);
}
void menu() {
    printf("\nYAPMAK ISTEDIGINIZ ISLEMI SECINIZ\n");
    printf("1. Hasta Kayit\n");
    printf("2. Kayit Sil\n");
    printf("3. Hastalari Listele\n");
    printf("0. Cikis\n");
    printf("Seciminizi Giriniz : ");
    
}

