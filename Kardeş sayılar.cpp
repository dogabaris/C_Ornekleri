#include <stdio.h>
#include <conio.h>

main()
{
	int bolen(int,int);
	int sonuc,sayi1,sayi2;
	printf("Sayi1 gir :");
	scanf("%d",&sayi1);
	printf("Sayi2 gir :");
	scanf("%d",&sayi2);
	bolen(sayi1,sayi2);
}
int bolen(int sayi1,int sayi2)
{
		int sonuc=0,i,sonuc2=0;
		for(i=1;i<sayi1;i++){
		if(sayi1%i==0){
		sonuc=sonuc+i;
}
}
		for(i=1;i<sayi2;i++){
		if(sayi2%i==0)
		sonuc2=sonuc2+i;
}
		if(sonuc==sonuc2)
		printf("sayilar kardestir.");
		else
		printf("sayilar kardes degildir.");
}
