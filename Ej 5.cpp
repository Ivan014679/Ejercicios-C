#include <stdio.h> 
#include <conio.h> 


main () 
{ 
	char n;
	char c, pal[n]; 
	int i=0;
	 
printf("Escriba una palabra:\n"); 
scanf("%s", &pal); 

	while (pal[i++]!='\0');
	
		printf("%s tiene %d letras.\n", pal, i-1); 	
	

 getch();

} 
