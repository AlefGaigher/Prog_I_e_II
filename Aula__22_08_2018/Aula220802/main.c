#include <stdio.h>
#include <stdlib.h>

//IronPython

//PROTÓTIPOS
int Fatorial(int N);
int Combinacao(int N, int P);
int main()
{
    int N, Contador, F,P,C,A;
    printf("Entre com o Valor Inteiro de N (N>= 0): ");
    scanf("%i", &N);
    printf("Entre com o Valor Inteiro de N (N>= 0): ");
    scanf("%i", &P);
    if(N<0 || P<0 || N<P)
        printf("Erro no calculo. \n");
    else
    {
        printf("Os Numeros Fatoriais Entre [0,%i] sao: \n", N);
        for(Contador=0; Contador <=N; Contador++)
        {
            F= Fatorial(Contador);
            printf("Fatorial (%i) = %i\n", Contador, F);
        }
        C= Combinacao(N,P);
        A= Arranjo(N,P);
        printf("Combinacao (%i, %i) = %i\n", N,P,C);
        printf("Arranjo (%i, %i) = %i\n", N,P,A);
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
int Combinacao(int N, int P)
{
    int C, A;
    C= Fatorial(N)/ Fatorial(N-P);
    return C;
}
int Arranjo(int N, int P)
{
    int C, A;
    C= Fatorial(N)/ Fatorial(N-P);
    return C;
}
