#include <stdio.h>
#include <conio.h>

int A[10],I,J,Aux;

main()
{
    printf("Digite 5 numeros: ");
    for(I=0;I<5;I++)
    {
        scanf("%d",&A[I]);
    }
    
    for(I=0;I<4;I++)
    {
        for(J=I+1;J<5;J++)
        {
            if(A[I]>A[J])
            {
                Aux=A[I];
                A[I]=A[J];
                A[J]=Aux;
            }
        }
    }
    
    for(I=0;I<5;I++)
    {
        printf("\n%d",A[I]);
    }
    getch();
}
