#include <stdio.h>
#include <conio.h>
#include <math.h>
float fonksiyon(int,int,int,int,int);
main()
{
	int a,b,c,x,y;
	float sonuc;
	
	printf("S�ras�yla aralar�nda birer bo�luk kullanarak a b c x ve y giriniz >" );
	scanf("%d %d %d %d %d",&a,&b,&c,&x,&y);
	sonuc=fonksiyon(a,b,c,x,y);
	printf("\n%f",sonuc);
	getch();
}
float fonksiyon(int a,int b,int c,int x,int y)
{

	float pay,payda,sonuc,paydason;
	pay=(float)(a*x)+(b*y)+c;
	payda= pow(a,2)+ pow(b,2);
	paydason=sqrt(payda);
	if(pay<0){
		sonuc=-pay / paydason;
		return sonuc;
}
	else{
		sonuc=pay / paydason;
		return sonuc;
}
}	
