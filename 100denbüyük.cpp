#include <stdio.h>
main ( void )
{
	int girilen_sayi;
	printf("100den b�y�k olan sayilar ekrana yazilir\n");
	printf("l�tfen bir tamsayi giriniz>");
	scanf("%d",&girilen_sayi);
	if ( girilen_sayi > 100 ) 
		printf("girilen sayi 100'den buyuktur");
	return 0;
}
