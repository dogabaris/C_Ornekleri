#include<stdio.h>
main( void )
{
	float sayi1;
	float sayi2;
	float ortalama;
	int i = 0;
	printf("ilk sayiyi girin>");
	scanf("%f",&sayi1);
	printf("ikinci sayiyiyi girin>");
	scanf("%f",&sayi2);
	ortalama = ( sayi1 + sayi2 ) / 2 ;
	while (i++ < 10);
	printf("%2d: Ortalamalari = %f'dir",i,ortalama);
	return 0;
}
