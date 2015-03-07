#include <stdio.h>
#include <conio.h>
main(){
    char ktr[200];
    int  i;
    puts("Bir seyler yazin");
    gets(ktr);
    for(i=0;ktr[i];i++); 
    printf("yazilan %d harfdir",i);
 }
