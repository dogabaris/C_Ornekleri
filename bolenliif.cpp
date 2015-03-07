#include <stdio.h>
main ( void )
{
	int sayi1;
	int sayi2;
	float sonuc;
	printf("bolunecek sayiyi girin >");
	scanf("%d",&sayi1);
	printf("boleni girin");
	scanf("%d",&sayi2);
	if ( sayi2 != 0 ) {
		sonuc = (float) sayi1 / sayi2;
		printf("sonuc; %.2f\n",sonuc);
}
	else
		printf("hata : bolen 0 olamaz ;)");
	
}
