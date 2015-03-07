#include<stdio.h>
#include<conio.h> 
int main() 
{ 	int terim; 
	float altinoran = 0.0;
 	printf("Bir Deðer Giriniz : ");
  	scanf("%d",&terim);
   	for (int i=0;i<terim;i++){
		altinoran = 1+1/altinoran;
	 } 
	printf("%f",altinoran);
	getch();
}
