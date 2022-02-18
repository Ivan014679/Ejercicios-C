#include <stdio.h>
#include <conio.h>

        int N[100],A=0,B=0,C,Ex;
    
main()
{
    do
    {
        for(A=0;A<100;A++)
        {
            printf("Digite un numero para la posicion %d: ",A);
            scanf("%d",&C);
            for(B=-1;B<A;B++)
            {
                if(C==0)
                {
                    Ex=C;
                    A=100;
                }
                else
                {
                    if(C==N[B])
                    {
                        printf("El numero %d esta repetido, por favor, digite un numero diferente\n",C);
                        A--;
                    }
                    else
                    {
                        N[A]=C;
                    }
                }
            }
        }
    }while(Ex!=0||A!=100);
}
