#include <stdio.h>
main()
{
	int n[3]={1,3,5};
	int i;
	printf("%s%13s\n","Eleman","De�er");
	for(i=0;i<=2;i++)
		printf("%4d%14d\n",i,n[i]);
	return 0;
}
