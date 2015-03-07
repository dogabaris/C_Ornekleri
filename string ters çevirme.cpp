#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	char birinci[10];
	printf("string gir ->\n");
	scanf("%s",&birinci);
	printf("tersi -> %s",strrev(birinci));
}
