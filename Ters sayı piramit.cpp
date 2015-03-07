#include<stdio.h>
#include<conio.h>
main() {
       int i,j,sayi,bosluk=0;
	   printf("Sayi giriniz > ");
       scanf("%d",&sayi); 
       for(i=sayi;i>=1;i--) {                                
                            for(j=0;j<bosluk;j++)          
                                                 printf(" ");        
                            for(j=1;j<=i;j++) {                    
                                              printf("%d ",i);        
                                              if(j!=i) printf(". ");   
                                              }
                            bosluk+=2; 
                            printf("\n");  
                            }
       getch(); 
       }
