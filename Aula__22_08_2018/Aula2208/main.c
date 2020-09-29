#include <stdio.h>
#include <stdlib.h>

//IronPython

//PROTÓTIPOS
int Fatorial(int N);
int main()
{
    int N, Contador, F;
    printf("Entre com o Valor Inteiro de N (N>= 0): ");
    scanf("%i", &N);
    if(N<0)
        printf("Erro no calculo. \n");
    else
    {
        printf("Os Numeros Fatoriais Entre [0,%i] sao: \n", N);
        for(Contador=0; Contador <=N; Contador++)
        {
            F= Fatorial(Contador);
            printf("Fatorial (%i) = %i\n", Contador, F);
        }
    }
    return 0;
}
int Fatorial(int N)
{
    int F=1, Contador;
    if (N>2)
    {
        for(Contador=2; Contador<=N;Contador++)
            F=F*Contador;
    }
    return F;
}

