#include <stdio.h>
#include <conio.h>
main()
{
	int sayac,faktor,nn;
	sayac=0;
	faktor=1;
	printf("faktor almak istenen sayiyi gir>");
	scanf("%d",&nn);
	while (sayac<nn){
		sayac =sayac+1;
		faktor=faktor*sayac;
	}
	printf("sonuc=%d",faktor);
	getch();
}
