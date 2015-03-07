#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h>
#include<cstdlib>
#include<string.h>
#include<windows.h>

int IlacEkleme();
int IlacListeleme();
int AnaMenu();
int IlacGuncelle();

struct Ilac
{
	char Ad[80];
	char Kod[80];
	char Bilgi[250];
	int Raf;
	int Adet;	
};
	
int AnaMenu()
{
	int secim=0;
	printf("\n 1 - �la� Ekle");
	printf("\n 2 - �la� Listele");
	printf("\n 3 - �la� G�ncelle");
	printf("\n 4 - ��k��\n");
	scanf("%d",&secim);
	
	switch(secim)
	{
		case 1:IlacEkleme();AnaMenu();break;
		case 2:IlacListeleme();AnaMenu();break;
		case 3:IlacGuncelle();break;
		case 4:return 0;break;
		default:printf("Listeden Se�im Yap�n ! \n");break;
	}
	
}

int IlacEkleme()
{
	FILE *fp;
	fp=fopen("Bilgiler.txt","a");

	if(fp==NULL)
	{
		printf("dosya ac�lam�yor !");
		return 0;	
	}
	
	struct Ilac Yeni;
	
	printf("\n ilac Ad�:");
	scanf("%s",&Yeni.Ad);
	printf("\n ilac Kodu:");
	scanf("%s",&Yeni.Kod);
	printf("\n ilac Adeti:");
	scanf("%d",&Yeni.Adet);
	printf("\n ilac Bilgisi:");
	scanf("%s",&Yeni.Bilgi);
	printf("\n raf Kodu:");
	scanf("%d",&Yeni.Raf);
	
	fprintf(fp,"%s %s %d %s %d\n",Yeni.Ad,Yeni.Kod,Yeni.Adet,Yeni.Bilgi,Yeni.Raf);
	fclose(fp);
	
}

int IlacListeleme()
{	
	FILE *fp;
	fp= fopen("Bilgiler.txt","r");
	
	if(fp==NULL)
	{
		printf("dosya ac�lam�yor !");
		return 0;	
	}
	
	struct Ilac Bul;
	char IlacAdi[80];
	printf("�la� Ad� : ");
	scanf("%s",&IlacAdi);
		
	while(!feof(fp))
	{	
		fscanf(fp,"%s %s %d %s %d\n",&Bul.Ad,&Bul.Kod,&Bul.Adet,&Bul.Bilgi,&Bul.Raf);
	
		if(!strcmp(IlacAdi,Bul.Ad))
		{
			printf("\nAd : %s\n",Bul.Ad);
			printf("Kod : %s\n",Bul.Kod);
			printf("Adet : %d\n",Bul.Adet);
			printf("Bilgi : %s\n",Bul.Bilgi);
			printf("Raf : %d\n",Bul.Raf);
		}
	}
	
	fclose(fp);
	printf("\n\n");
	printf("i�lem basar�l� devam atmek icin bir tusa bas");
	getch();
}

int IlacGuncelle()
{
	FILE *fp;
	FILE *Temp;
    struct Ilac Guncelle;
    char IlacAd[80],pass;
	printf("\n�la� Ad� : ");
	scanf("%s",&IlacAd);
	
	if((fp = fopen("Bilgiler.txt","r"))==NULL)
	{
		printf("Dosya ac�lam�yor !");
		return 0;	
	}
	
	if((Temp = fopen("Temp.txt","w"))==NULL)
	{
		printf("Dosya a��lamad� ! \n");
		return 0; 
	}
	
	while(!feof(fp))
	{
		fscanf(fp,"%s %s %d %s %d\n",&Guncelle.Ad,&Guncelle.Kod,&Guncelle.Adet,&Guncelle.Bilgi,&Guncelle.Raf);
		
		if(!strcmp(IlacAd,Guncelle.Ad))
		{
			printf("\n----------------------------------\n");
			printf( "\n Ad : %s",Guncelle.Ad);
			printf( "\n Kod : %s",Guncelle.Kod);
			printf( "\n Adet : %d",Guncelle.Adet);
			printf( "\n Bilgi : %s",Guncelle.Bilgi);
			printf( "\n Raf : %d",Guncelle.Raf);

			printf(" \n\n------ Kayd� d�zeltme ------------------------");
		
			printf( "\n Ad : ");scanf("%s",&Guncelle.Ad);
			printf( "\n Kod : ");scanf("%s",&Guncelle.Kod);
			printf( "\n Adet : ");scanf("%d",&Guncelle.Adet);
			printf( "\n Bilgi : ");scanf("%s",&Guncelle.Bilgi);
			printf( "\n Raf : ");scanf("%d",&Guncelle.Raf);

			printf("\n----------------------------------\n");
			
			printf( "\nYap�lan de�i�iklikleri kaydetmek istiyormusunuz (y) yes (n) no : ");scanf("%s",&pass);
			if( pass=='y' || pass=='Y')
			{
		 		fprintf(Temp,"%s %s %d %s %d\n",Guncelle.Ad,Guncelle.Kod,Guncelle.Adet,Guncelle.Bilgi,Guncelle.Raf);
			}
			else
			{
				fclose(Temp);
				remove("Temp.txt");
				return 0;
			}
		}
		else
		{
			fprintf(Temp,"%s %s %d %s %d\n",Guncelle.Ad,Guncelle.Kod,Guncelle.Adet,Guncelle.Bilgi,Guncelle.Raf);
		}
	}
	
	fclose(fp);
	fclose(Temp);
	remove("Bilgiler.txt");
	rename("Temp.txt","Bilgiler.txt");
}

int main()
{
	setlocale(LC_ALL,"Turkish");
	AnaMenu();
}

