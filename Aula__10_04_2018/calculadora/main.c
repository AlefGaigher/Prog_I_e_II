#include <stdio.h>
#include <stdlib.h>

int main()
{
    int B,E, POT = 1, Contador;
    printf("Valor da Base: B(>0) = ");
    scanf("%i", &B);
    printf("Valor do expoente: E (E>0) = ");
    scanf("%i", &E);
    if (B<= 0 || E <= 0)
    printf("Erro! \n");
    else
    {
      for (Contador = 1; Contador <= E; Contador++)
            POT = POT * B;
      printf("Pot(%i, %i) = %i\n", B,E, POT);
    }
    return 0;
}
