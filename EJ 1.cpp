#include <stdio.h>
#include <conio.h>

main()
{
    int N=0,X;
    
    printf("Digite el numero de datos que quiere digitar: ");
    scanf("%d",&N);
  
    float A[N];   
    
    for(X=0;X<N;X++)
    {
        printf("Digite el dato numero %d: ",X);
        scanf("%d",&A[N]);
    }

    getch();
}
