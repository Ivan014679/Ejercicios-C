#include <stdio.h>
#include <conio.h>

main()
{
    int A[10];
    int N,V,W,X=0,Y;
    
    printf("Programa que ordena 10 numeros en forma ascendente utilizando el metodo burbuja");
    
    for(V=0;V<10;V++)
    { 
        printf("\nDigite un numero para el vector No %d: ",V);
        scanf("%d",&N);
        A[V]=N;
    }
    
    for (V=0;V<10;V++) 
    { 
        for (W=V+1;W<10;W++) 
        { 
            if (A[W]<A[V]) 
            { 
                X=A[W];
                A[W]=A[V]; 
                A[V]=X; 
            } 
        } 
    } 
  
    
	for(Y=0;Y<10;Y++)
    {
        printf("\n%d",A[Y]);
    }
    getch();
}
