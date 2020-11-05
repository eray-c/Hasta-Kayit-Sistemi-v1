#ifndef HASTANE_H
#define HASTANE_H

#define UZUNLUK 20
#define AD_UZUNLUK 50


typedef struct doktor {
    char doktorAdi[AD_UZUNLUK];
    char doktorSoyadi[AD_UZUNLUK];
}Doktor;

typedef struct hasta {
    char ad[AD_UZUNLUK];
    char soyad[AD_UZUNLUK];
    char tc[AD_UZUNLUK];
    char tarih[AD_UZUNLUK];
    Doktor doktor;
}Hasta;

extern Hasta hastaListesi[];
extern int hastaSayisi;


void hastaKayit();
void kayitSil();
void hastaListele();
void doktorDurum();

#endif /* HASTANE_H */

