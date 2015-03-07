#include <stdio.h>
#include <conio.h>
main()
{
		int maks(int,int,int),a,b,c;
		printf("sayi gir>");
		scanf("%d %d %d",&a,&b,&c);
		printf("En büyüh sayi = %d\n",maks(a,b,c));
		
}

int maks(int a,int b,int c)
{
	if(a>b && b>c)
	return a;
	else if(b>a && a>c)
	return b;
	else if(c>b && b>a)
	return c;
}
