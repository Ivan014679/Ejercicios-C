#include <stdio.h>
#include <conio.h>

void captura();
void buscar();
void vender();
void comprar();
void estadisticas();
void ordenar();
 
    int op,Cant[20],Bcant,Inx=0,I,J;
    int long Cod[20],Bcod;
    float Pagar,AcPag,AcIVA,IVA,Precio,Vu[20];

main()
{
    do
    {
        printf("MENU");
        printf("\n1. Capturar");
        printf("\n2. Buscar");
        printf("\n3. Vender");
        printf("\n4. Comprar");
        printf("\n5. Estadisticas");
        printf("\n6. Ordenar");
        printf("\n7. Salir");
        
        printf("\nDigite su opcion: ");
        scanf("%d",&op);
        
        switch(op)
        {
            case 1:
                {
                    captura();
                    break;
                }
            case 2:
                {
                    buscar();
                    break;
                }
            case 3:
                {
                    vender();
                    break;
                }
            case 4:
                {
                    comprar();
                    break;
                }
            case 5:
                {
                    estadisticas();
                    break;
                }
            case 6:
                {
                    ordenar();
                    break;
                }
        }
    }while(op!=7);
}
void captura()
{
    for(I=0;I<3;I++)
    {
        printf("Codigo del producto: ");
        scanf("%ld",&Cod[I]);
  
            printf("Digite la cantidad: ");
            scanf("%d",&Cant[I]);
            printf("Digite el valor unitario: ");
            scanf("%f",&Vu[I]);
        }
        else
        {
            I--;
        }
    }
}
void buscar()
{
    printf("Codigo del producto a buscar: ");
    scanf("%ld",&Bcod);
    Inx=0;
    for(I=0;I<3;I++)
    {
        if(Bcod==Cod[I])
        {
            printf("Codigo=%ld",Cod[I]);
            printf("\nCantidad=%d",Cant[I]);
            printf("\nValor unitario=%f\n",Vu[I]);
        }
        else
        {
            Inx++;
        }
    }
    if(Inx==3)
    {
        printf("El codigo no existe\n");
    }
    getch();
}

void vender()
{
    printf("Digite el codigo del producto a vender: ");
    scanf("%ld",&Bcod);
    Inx=0;
    for(I=0;I<3;I++)
    {
        if(Bcod==Cod[I])
        {
            printf("Unidades a vender: ");
            scanf("%d",&Bcant);
            if(Bcant<=Cant[I])
            {
                Cant[I]=Cant[I]-Bcant;
                Pagar=Bcant*Vu[I];
                IVA=Pagar*0.16;
                AcIVA=AcIVA+IVA;
                printf("Total a pagar: %f\n",Pagar);
                printf("Total IVA: %f\n",IVA);
                AcPag=AcPag+Pagar;
            }
            else
            {
                printf("Imposible de vender\n");
            }
        }
        else
        {
            Inx++;
        }
    }
    if(Inx==3)
    {
        printf("El codigo no existe\n");
    }
    getch();
}
void comprar()
{
    printf("Digite el codigo del producto a comprar: ");
    scanf("%ld",&Bcod);
    Inx=0;
    for(I=0;I<3;I++)
    {
        if(Bcod==Cod[I])
        {
            printf("Unidades a comprar: ");
            scanf("%d",&Bcant);
            Cant[I]=Cant[I]+Bcant;
            
            printf("Precio de compra: ");
            scanf("%f",&Precio);
            Vu[I]=(Vu[I]+Precio)/2;          
        }
        else
        {
            Inx++;
        }
    }
    if(Inx==3)
    {
        printf("El codigo no existe");
    }
    getch();
}

void estadisticas()
{
    printf("Total en caja: %f\n",AcPag);
    printf("IVA Total: %f\n",AcIVA);
    getch();
}
void ordenar()
{
    for(I=0;I<2;I++)
    {
        for(J=I+1;J<3;J++)
        {
            if(Cod[I]>Cod[J])
            {
                Inx=Cod[I];
                Cod[I]=Cod[J];
                Cod[J]=Inx;
                Inx=Cant[I];
                Cant[I]=Cant[J];
                Cant[J]=Inx;
                Inx=Vu[I];
                Vu[I]=Vu[J];
                Vu[J]=Inx;
                //Si Ximena trata de plagiar esto, por favor, matarla
            }
        }
    }
    
    for(I=0;I<3;I++)
    {
        printf("\nCodigo del producto: %ld",Cod[I]);
        printf("\nCantidad: %d",Cant[I]);
        printf("\nValor unitario: %f\n",Vu[I]);
    }                
}
