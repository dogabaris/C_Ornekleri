#include<stdio.h>
int main( void )
{
	float sayi1;
	float sayi2;
	float ortalama;
	printf("iki say�y� da girin >");
	scanf("%f%f",&sayi1,&sayi2);
	ortalama = ( sayi1 + sayi2 ) / 2 ;
	printf("ortalamalari = %f'dir",ortalama);
	return 0;
}
