#include <stdio.h>
#include <conio.h>

main()
{
    int A[9];
    int B,C,D;
    
    for(B=0;B<10;B++)
    {
        printf("Digite un numero para la posicion %d del vector: ",B);
        scanf("%d",&C);
        for(D=0;D<9;D++)
        {
            if(B==D)
            {
                D++;
                if(D==9)
                {
                    D--;
                }
            }
            if(C==A[D])
            {
                printf("\nEl numero ya existe\n");
                D=11;
                B--;
            }
            else
            {
                A[B]=C;
            }
        }
    }
        
    getch();
}
