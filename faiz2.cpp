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
	ana=ara;
	for(sayac=1;sayac<=ay+1;sayac++){
		
		faiz=ana*(0.05);
		ara=ana+faiz;
}
	
	printf("%d ayda paraniz %.2f olur ve %.2f kadar faiz eklenir",ay,ara,faiz);
	getch();
}
