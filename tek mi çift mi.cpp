#include <stdio.h>
#include <locale.h>
#include <conio.h>
main ()
{
	setlocale(LC_ALL, "Turkish");
	baslangic:
	int sayi,kalan;
	printf("SAYININ TEK M� ��FT M� OLDU�UNU ANLAMAK ���N\n");
	printf("Bir sayi giriniz : ");
	scanf("%d",&sayi);
	kalan = sayi % 2;
	if (kalan == 0) 
		printf("Say� �ift\n");
	else 
		printf("Say� tek\n");
		goto baslangic;
}

