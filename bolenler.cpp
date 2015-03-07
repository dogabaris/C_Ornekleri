#include <stdio.h>
#include <conio.h>

main()
{
	int bolen(int);
	int sayi;
	printf("Sayi gir :");
	scanf("%d",&sayi);
	bolen(sayi)
	getch();
}
int bolen(int a)
{
	int i;
	for(i=1;i<=a;i++){
		if(a%i==0)
		printf("%d \n",i);
	}
}

