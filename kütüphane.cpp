#include<locale.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include <cstdlib>
int main(void)
{
	baslangic:
    setlocale(LC_ALL, "Turkish");
    char ad[20],soyad[20],no[11],iletisim[50],kitap[20],alis[12],iade[12];// 3 tane char t�r�nde dizi de�i�kenimi tan�ml�yoruz
        printf("1. yeni kayit ekle\n");
        printf("2. kayit ara\n");
        printf("3. cikis\n");
        printf("bir secim yapiniz\n");
        int secim;
        scanf("%d",&secim);
        
if(secim == 1){
    FILE *dosya; // de�i�kenimizi tan�ml�yoruz

    // no de�i�kenini numarayla herhangi bir aritmatik i�lem yapmayaca��m i�in char tan�mlad�m
    printf("AD: ");// Kullan�c�dan ad�n� istiyoruz
    scanf("%s",&ad); // %s kullanarak string bir ifadeyi okutuyoruz ve ad ddizi de�i�kenine at�yoruz
    printf("SOYAD: ");
    scanf("%s",&soyad);
    printf("NO: ");
    scanf("%s",&no);
    printf("ILETISIM: ");
    scanf("%s",&iletisim);
    printf("KITAP: ");
    scanf("%s",&kitap);
    printf("ALIS TARIHI: ");
    scanf("%s",&alis);
    printf("IADE TARIHI: ");
    scanf("%s",&iade);


    dosya = fopen("kayit.txt","a+"); // dosya de�i�kenimle kayit.txt adinda bir metin belgesi a�t�m
    // a+ dememin sebebi yazmaya sat�r�n sonundan ba�lamas� i�in
    fprintf(dosya,"%s %s %s %s %s %s %s\n",ad,soyad,no,iletisim,kitap,alis,iade); // kullan�c�dan ald���m bilgileri txt ye yazd�rd�m fprintf fonksiyonuyla
    fclose(dosya); // i�lem tamamland�ktan sonra dosyam� kapat�yorum
    // derledi�iniz zaman .exe'nin �al��t��� yerde txt'yi olu�turur.
}
    
  if(secim == 2){
    	FILE *dosya;
    	dosya = fopen("kayit.txt","r");
        char ARANAN[50];
        int sonuc[5];
		printf("ARANAN: ");
   	 	scanf("%s",ARANAN);
    while(!feof(dosya))// !feof dosyan�n sonun gelene kadar d�n demek
    {
        fscanf(dosya,"%s %s %s %s %s %s %s",&ad,&soyad,&no,&iletisim,&kitap,&alis,&iade);// dongu ilk donu�unde birinci sat�r� g�sterecektir
	    if(strcmp(ARANAN,ad)==0){
        printf("-\n Adi: %s\n Soyadi: %s\n No: %s\n �leti�im: %s\n Kitap: %s\n Al�� Tarihi: %s\n �ade Tarihi: %s\n-\n",ad,soyad,no,iletisim,kitap,alis,iade); // okudu�u bilgiler ekrana formatl� bir �ekilde yazd�racak
		}
    }
    // not: txt de ka� sat�r varsa d�ng� o say�da d�necektir
    fclose(dosya); // sonunda dosyam�z� kapat�yoruz
 }
	
	if(secim == 3)
	{
		 return 0;
	}
		
    goto baslangic;
}
