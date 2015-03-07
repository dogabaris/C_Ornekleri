#include<stdio.h>
#include<conio.h>

main()
{
int sayi;
printf("sayi giriniz.");
scanf("%d",&sayi);

void fonksiyon(int);
fonksiyon(sayi);
getch();
}

void fonksiyon (int satir)
{
for (int i=1; i<=satir; i++)
{
for (int j=1; j<=satir-i; j++)
printf(" ");

for(int k=1; k<=i; k++)
{ printf("%d",k);}


printf("\n");
}
}
