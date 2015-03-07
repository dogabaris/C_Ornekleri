#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
	int ay,sayac;
	float ara,yuzde,fark,yil,ana,faiz;
	printf("her ay %0.05 faizlenecek ana parayi gir :");
	scanf("%f",&ana);
	printf("kac ayda :");
	scanf("%d",&ay);
	
	for(sayac=0;sayac<ay;sayac++){
		
		faiz=(ana/100)*0.05;
		ana=ana+faiz;
}
	printf("%d ayda paraniz %f olur ve %f kadar faiz eklenir",ay,ana,faiz);
	getch();
}
