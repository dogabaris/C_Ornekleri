#include <stdio.h>
#include <conio.h>
main()
{
	int binler,yuzler,birler,toplam,ara,sayac;
	printf("4 basamakli sayiyi girin = ");
	scanf("%d %d %d",&binler,&yuzler,&birler);
	toplam=binler+yuzler+birler;
	for(sayac=9;sayac>=0;sayac--){
	if(toplam%3!=0){
		
		toplam=toplam+sayac;
		
	}
	else if(toplam%3==0)
	printf("alabilece�i en b�y�k de�er ")
	break;
    }	
	printf("alabilecegi en b�y�k deger icin a = %d olmalidir",sayac);

	getch();
}
