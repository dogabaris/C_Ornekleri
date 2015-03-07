#include <stdio.h>
#include <conio.h>

main() {
int i, satir, j;

printf("satir sayisini gir : ");

scanf("%d",&satir);

for (i=1;i<=satir;i++)

{ for (j=1;j<=satir-i;j++)

	printf(" ");

	for (j=1;j<=2*i-1;j++)

{ if (j==1 || j==2*i-1)

	printf("*");

	else printf(" ");

}

	printf("n");

}

	for (i=satir-1;i>=1;i--)

{

for (j=1;j<=satir-i;j++)

printf(" ");

for (j=1;j<=2*i-1;j++)

{

if (j==1 || j==2*i-1)

printf("*");

else

printf(" ");

}

printf("n");

}

scanf("%d",&satir); 
}
