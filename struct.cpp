#include<stdio.h>
#include<string.h>
struct AdresDefteri { 
   int ID;
   char Ad[100];
   char Soyad[100];
   char TelNo[10];
   char Adres[200];
};
 
int main() {
   struct AdresDefteri kontak;
 
   kontak.ID = 1;
   strcpy(kontak.Ad, "Ali");
   strcpy(kontak.Soyad, "Rüzgar");
   strcpy(kontak.TelNo, "31245599xx");
   strcpy(kontak.Adres, "xxxxxx ANKARA");
}
