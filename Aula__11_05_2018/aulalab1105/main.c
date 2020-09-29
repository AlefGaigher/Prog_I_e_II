//Lista 3: Exercicio 3: Letra K
#include <stdio.h>
#include <stdlib.h>
#define TamanhoVetor 10 //Define a Quantidade Dentro do Vetor

int main()
{
    char Vetor[TamanhoVetor];
    int Indice, Quantidade=0, Sentinela = 0; //sentinela = 0  == não contém as letras consecutivas
    printf("Entre com a quantidade %i Simbolos (Char) qualquer: \n", TamanhoVetor);
    for(Indice=0; Indice< TamanhoVetor; Indice++)
    {
        printf("Vetor [%i]: ", Indice);
        scanf("\n%c", &Vetor[Indice]);
    }
//Letra K: Quantas Vezes Aparece as Letras Consecutivas: U e V e V
    Indice= 0; // Zera o Indice
    while(Indice <= TamanhoVetor - 3) // Acrescentar sentinela == 0 caso queira q apareça 1 vez
    {
        if (Vetor[Indice] == 'U' && Vetor [Indice+1] == 'V'  && Vetor[Indice+2] == 'V')
        {
            Quantidade++;
            Sentinela = 1; //SIM
        }
        else if (Vetor [Indice] == 'U' + 'V'+ 'V')
        {
            Quantidade++;
            Sentinela = 1;
        }
        Indice++;
    }
    if (Sentinela == 0)
        printf("As Letras U.V.V Nao estao no vetor. \n");
    else
        printf("As Letras U.V.V Foram encontradas %i vezes. \n", Quantidade);

    return 0;
}
