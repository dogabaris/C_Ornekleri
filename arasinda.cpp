#include <stdio.h>
main (void)
{
	int sayi1;
	printf("Girilen sayinin 18 ile 67 arasinda olup olmadigini kontrol eder\n");
	printf("Lutfen bir tamsayi giriniz >");
	scanf("%d",&sayi1);
	if ( sayi1>18 && sayi1<67 )
		printf("sayi 67den kucuk 18den buyuk\n");
	else
		printf("sayi 67 ile 18 arasi degil\n");
	return 0;
}
