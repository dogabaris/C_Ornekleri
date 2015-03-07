#include <stdio.h>
#include <conio.h>
main()
{
	int a,b,sonuc;
	int obeb(int,int);
	printf("Obeb alinacak 1.sayiyi girin>");
	scanf("%d",&a);
	printf("Obeb alinacak 2.sayiyi girin>");
	scanf("%d",&b);
	sonuc=obeb(a,b);
	printf("obeb = %d",sonuc);
}
int obeb(int a,int b){
	int sonuc,i,c,k;
	if(a<b){
	for(i=1;i<=a;i++)
		if((a%i==0)&&(b%i==0))
		k=i;
		return k;
	}
	if(b<a){
	for(i=1;i<=b;i++)
		if((a%i==0)&&(b%i==0))
		k=i;
		return k;
}
}


