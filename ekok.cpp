#include <stdio.h>
#include <conio.h>
main()
{
	int a,b,sonuc;
	int ekok(int,int);
	printf("ekok alinacak 1.sayiyi girin>");
	scanf("%d",&a);
	printf("ekok alinacak 2.sayiyi girin>");
	scanf("%d",&b);
	sonuc=ekok(a,b);
	printf("ekok = %d",sonuc);
}
int ekok(int a,int b){
	int i,c,k=1,j;
	if(a<b){
	for(i=2;i<b;i++){
		devam:
		if((a%i==0)&&(b%i==0))
		a=a/i;
		b=b/i;
		k=k*i;
    }
	for(j=2;j<b;j++){
		if((b%j==0))
		b=b/j;
		k=k*j;
		}
	if((b==1))
	return k;
	}	
}


