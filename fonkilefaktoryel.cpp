#include <stdio.h>
#include <conio.h>

int faktoriyel(int);

main()
{
	int faktoriyel(int),toplam,a;

	
	printf("Neyin faktoriyelini alalým =");
	scanf("%d",&a);
	toplam=faktoriyel(a);
	printf("\n%d nin faktoryeli = %d",a,toplam);

}
int faktoriyel(int a)
{
    
    int toplam = 1, i;
    for(i = 1; i <= a; i++)
    {
        toplam =toplam * i;
    }
	return toplam;
}
	

