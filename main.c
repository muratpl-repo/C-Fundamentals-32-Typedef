#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct Ogrenciler {

int okulNo;
char isim[50];
char soyIsim[50];
int sinif;
char sube;
double genelOrtalama;

}Ogrenci;

int main()
{
    setlocale(LC_ALL,"Turkish");

    Ogrenci ogrenci1;
    Ogrenci ogrenci2;

    ogrenci1.okulNo=450;
    ogrenci2.okulNo=451;

    strcpy(ogrenci1.isim,"Murat");
    strcpy(ogrenci1.soyIsim,"Pala");
    strcpy(ogrenci2.isim,"Mehmet");
    strcpy(ogrenci2.soyIsim,"Topal");

    printf("%d %s %s\n",ogrenci1.okulNo,ogrenci1.isim,ogrenci1.soyIsim);
    printf("%d %s %s\n",ogrenci2.okulNo,ogrenci2.isim,ogrenci2.soyIsim);

    return 0;
}
