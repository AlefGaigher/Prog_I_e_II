#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//protótipo
int Primo(int Numero);
int main()
{
  int Numero, Resposta;
  printf("\nNumero inteiro (Numero >= 1): ");
  scanf("%i", &Numero);
  if(Numero <= 0)
     printf("Erro calculo.\n");
  else
  {
    Resposta = Primo(Numero);
    if (Resposta == 1)
        printf("\nNumero: %i EH PRIMO. ", Numero);
    else
         printf("\nNumero: %i NAO EH PRIMO. ", Numero);
  }
  return 0;
}
int Primo(int Numero)
{
    int Resposta = 1, Contador;
    if(Numero >= 4)
    {
        Contador = 2;
        while(Contador <= ceil(sqrt(Numero)) && Resposta == 1)
        {
          if(Numero % Contador == 0)
             Resposta = 0; //nao
           Contador++;
        }
    }
    return Resposta;
}
