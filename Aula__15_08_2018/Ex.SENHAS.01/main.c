#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int Senha, Contador;
    srand(time(NULL)) ; //PASSAGEM DE TEMPO EM MILISEGUNDOS P/ TROCAR AS SENHAS MAIS RAPIDO
    printf("Sugestao de 6 Senhas: \n") ;
    for (Contador = 1; Contador <= 6; Contador++)
    {
        Senha = rand() % 900000 + 100000 ;
        printf("Senha %i : %i\n", Contador, Senha);
    }
    return 0;
}
