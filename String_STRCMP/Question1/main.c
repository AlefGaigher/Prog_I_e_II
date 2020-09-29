#include <stdio.h>
#include <string.h>
#define T 100
int ContarLetra(char MSG[T], char Letra);
//Void ContarLetra(char MSG[T], char Letra, int *Q);

int main()
{
    char Mensagem[T], Letra;
    int C, Quantidade;
    for (C=1;C<=T;C++)
    {
        printf("Mensagem %i: ", C); scanf("\n%[^\n]", Mensagem);
        printf("Letra    %i: ", C); scanf("\n%c", &Letra);
        printf("A Mensagem: %s Contem %i Vezes e Letra: %c\n",  Mensagem, Quantidade, Letra);
    }
    return 0;
}
int ContarLetra(char MSG[T], char Letra)
{
    int i=0, Q=0;
    while(MSG[i] != '\0')
    {
        if(MSG[i] == Letra)
            Q++;
        i++;
    }
    return Q;
}
