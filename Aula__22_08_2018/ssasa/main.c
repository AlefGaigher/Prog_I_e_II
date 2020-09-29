#include <stdio.h>
#include <stdlib.h>
// PROTÓTIPO
int fatorial (int N);
int combinacao(int N, int P);
int Arranjo (int N, int P);
int main(){
int N, contador, fat, C, A, P, F;

printf("\nEscolha o valor inteiro de N>= 0): ");
scanf("%i", &N);
printf("\nEscolha o valor inteiro de P >= 0): ");
scanf("%i", &P);
if (N < 0 || P < 0 || P > N )
    printf("\nERRO CALCULO. ");
else
{
    printf("\nOs numeros fatoriais de [0, %i] sao:\n", N);
    for (contador = 0; contador <= N ; contador ++)
    {
        fat = fatorial(contador);
        printf("Fatorial (%i) = %i\n", contador, fat);
    }
    C = combinacao (N, P);
    A = Arranjo (N, P);
    printf("Combinacao(%i, %i) = %i\n", N,F,C);
    printf("Arranjo (%i,%i) = %i\n", N,P,A);
}
return 0;
}
int fatorial (int N)
{
    int fat = 1, contador;
    if (N >= 2)
    {
      for(contador = 2; contador <= N; contador++)
          fat = fat * contador;
    }
   return fat;
}
int combinacao (int N, int P)
{
  int C;
  C = fatorial (N) / (fatorial (N - P) * fatorial (P));
  return C;
}
int Arranjo(int N, int P)
{
   int A;
   A = fatorial (N) / fatorial(N - P);
   return A;
}

