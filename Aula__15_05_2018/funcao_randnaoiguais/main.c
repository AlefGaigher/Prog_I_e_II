/*=> A Função: Randômica
Obs: A Função rand repete Números Já Sorteados, Pois não há Memorização deste valores.
exemplo de vetor: senhas
Senhas: | 35 | 22 | 35(sortear dnv) | 49 | ... | .

Números de dois dígitos
Intervalo: [10,99]
numero sorteado = rand()%(maximo- minimo+1)+minimo
                = rand()%(99-10+1)+10,
numero sorteado = rand()% 90+10 , Intervalo [10,99]
                    [0,89]+10 => [10,99]
*/
#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10

int main()
{
    int Senhas[TAMANHO], Sentinela, i=0, j;
    while (i < TAMANHO)
    {
        Senhas [i] = rand()%90+10;
        Sentinela = 0; //Não está no vetor
        j=i-1;
        while(j >= 0 && Sentinela == 0)
        {
            if (Senhas [i] == Senhas [j])
                Sentinela = 1; // já está no vetor
            j--;
        }
        if (Sentinela == 0)
            i++;
    }
    for (i = 0; i<TAMANHO; i++)
        printf(" %i ", Senhas[i]);
    printf(" ].\n");
    return 0;
}
