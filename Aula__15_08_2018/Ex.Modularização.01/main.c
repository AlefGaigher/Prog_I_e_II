// MODULARIZAÇÃO: USO DAS FUNÇÕES: MATH.H
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float A, B, C, Delta, RaizDelta, x1, x2 ;
    printf("Entre com o coeficiente A: ") ;
    scanf("%f", &A) ;
    if (A == 0)
        printf("Não e uma equacao do 2 Grau. \n");
    else
    {
        printf("Entre com o coeficiente B: ");
        scanf("%f", &B) ;
        printf("Entre com o coeficiente C: ") ;
        scanf("%f", &C) ;
        Delta = pow(B, 2) - 4 * A * C ;
        printf("Delta: %.1f\n", Delta) ;
        if ( Delta <= 0)
            printf("Nao ha raizes no conjunto dos Reais.\n Entre com um Delta válido \n");
        else
        {
            RaizDelta = sqrt(Delta) ;
            printf("Raiz de Delta : %.1f\n", RaizDelta);
            x1 = ( -B + RaizDelta) / (2 * A) ;
            x2 = ( -B - RaizDelta) / (2 * A) ;
            printf("Raiz 1: X1 = %.1f\n", x1) ;
            printf("Raiz 2 : X2 = %.1f\n", x2) ;

        }
    }
    return 0;
}
