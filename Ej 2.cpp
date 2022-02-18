#include <stdio.h>
#include <conio.h>

main()
{
    int A[6],B[6],C,D;
    
    printf("Digite los datos del vector A\n");
    for(C=0;C<6;C++)
    {
        printf("Numero para la posicion %d del vector A: ",C);
        scanf("%d",&A[C]);
    }
    printf("\nDigite los datos del vector B\n");
    for(C=0;C<6;C++)
    {
        printf("Numero para la posicion %d del vector B: ",C);
        scanf("%d",&B[C]);
    }

    for(C=0;C<6;C++)
    {
        for(D=0;D<6;D++)
        {
            if(A[C]==B[D])
            {
                printf("\nEl numero %d se repite",A[C]);
            }
        }
        
    }
    
    for(C=0;C<6;C++)
    {
        for(D=1;D<5;D++)
        {
            if(C==D)
            {
                D++;
            }
            if(A[C]==A[D])
            {
                printf("\nEl numero %d se repite",A[C]);
            }
        }
    }
    
    for(C=0;C<6;C++)
    {
        for(D=1;D<5;D++)
        {
            if(C==D)
            {
                D++;
            }
            if(B[C]==B[D])
            {
                printf("\nEl numero %d se repite",B[C]);
            }
        }
    }
    getch();
}
