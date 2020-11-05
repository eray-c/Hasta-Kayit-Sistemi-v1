#include <stdio.h>
#include <string.h>
#include "hastane.h"

Hasta hastaListesi[UZUNLUK];
int hastaSayisi = 0;
int hastaEray = 0;
int hastaOzge = 0;

static void hastaOku(Hasta* hastaPtr);
static void hastaYazdir(Hasta* hastaPtr);

void hastaKayit() {
    Hasta *hastaPtr;
    if(hastaSayisi == UZUNLUK) {
    printf("Tum randevular dolu\n");
    return;
    }
    hastaPtr = &hastaListesi[hastaSayisi];
    hastaOku(hastaPtr);
    hastaSayisi++;
 }
void kayitSil() {
    Hasta *hastaPtr;
    if(hastaSayisi == 0) {
        printf("Kayitli hasta bulunmamaktadir!\n");
        return;
    }
    hastaListele();
    int silinecekID;
    printf("\nKaydini silmek istediginiz hasta numarasini giriniz : ");
    scanf("%d", &silinecekID);
    while(silinecekID < 1 || silinecekID > hastaSayisi) {
        printf("\nGirdiginiz ID gecersizdir!\n");
        printf("Kaydini silmek istediginiz hasta numarasini giriniz :");
        scanf("%d", &silinecekID);
    }
    hastaPtr = &hastaListesi[silinecekID - 1];
    *hastaPtr = hastaListesi[hastaSayisi - 1];
    hastaSayisi--;
    printf("\nSectiginiz kayit silinmistir.\n");
}
void hastaListele() {
    Hasta *hastaPtr;
    hastaPtr = hastaListesi;
    int i = 0;
    while(i<hastaSayisi) {
        hastaYazdir(hastaPtr);
        hastaPtr++;
        i++;
    }
    printf("\n");
}            
static void hastaOku(Hasta* hastaPtr) {
    printf("\n[HASTA EKLEME]\n");
    
    printf("Hastanin adi-soyadi : ");
    scanf("%s %s",(hastaPtr->ad),(hastaPtr->soyad));
    
    printf("TC kimlik numarasi : ");
    scanf("%s",(hastaPtr->tc));
    
    printf("Hastanin dogum tarihi(gg.aa.yyyy) : ");
    scanf("%s",&(hastaPtr->tarih));
    
    printf("Doktorun adi-soyadi : ");
    scanf("%s %s",(hastaPtr->doktor.doktorAdi),hastaPtr->doktor.doktorSoyadi);
    
}static void hastaYazdir(Hasta* hastaPtr) {
    int hastaSiraNo = (hastaPtr - hastaListesi) + 1;
    printf("\n");
    printf("Hasta numarasi :%d\n",hastaSiraNo);
    printf("Hasta adi :%s %s\n",hastaPtr->ad,hastaPtr->soyad);
    printf("Hasta TC numarasi :%s\n",hastaPtr->tc);
    printf("Hasta dogum tarihi :%s\n",hastaPtr->tarih);
    printf("Hasta doktoru :%s %s\n",hastaPtr->doktor.doktorAdi,hastaPtr->doktor.doktorSoyadi);
}
