#include <stdio.h>
#include <stdlib.h>

int main()
{
 int Contador , Soma = 0;
 printf("Os Multiplos de 11 Entre [400, 300] Sao: \n");
 for(Contador = 400; Contador >= 300; Contador--)
 {
     if(Contador % 11 == 0)
     {
         printf("Multiplo de 11: %i\n", Contador);
         Soma = Soma + Contador;
     }
 }
printf("Soma dos Multiplos de 11 entre [400, 300] = %i\n", Soma);
    return 0;
}
