#include <stdio.h>
#include <conio.h>
main()
{
	int a;
	printf("3 basamakli sayi gir > ");
	scanf("%d",&a);
	void fonksiyon(int);
	fonksiyon(a);
	getch();
}
void fonksiyon(int a)
{
	
	int i,b,c;
	
	for(i=1;i<=100;i=i*10){
	b=a/i;
	printf("%d",b);
	printf(" ");
	
	for(c=2;c<=b;c++)
	
		if(b%c==0)
		printf("sayi asal deðildir");
		printf("\n");
		goto baslangic;
	    if(b%c!=0)
		printf("sayi asaldir");
		break;
}

}
