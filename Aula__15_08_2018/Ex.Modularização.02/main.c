// MODULARIZAÇÃO : USAR FUNÇÕES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N, Contador ;
    float Fn;
    printf("Entre com o Valor de N (N >= 1) : ");
    scanf("%i", &N) ;
    if ( N <= 0)
        printf("ERRO no calculo. \n") ;
    else
    {
        printf("Os Valores da Funcao entre [ 1, %i] sao: \n", N) ;
        for (Contador = 1; Contador <= N; Contador++)
        {
            Fn = ceil(pow(3, Contador) - pow(2, Contador)) / (pow(Contador, 1.0 / 5)) ;
            printf("F(%i) = %.1f\n", Contador, Fn) ;
        }
    }
    return 0;
}
