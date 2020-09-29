#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numeroR, numeroE, tent=0;
    char esc;
    srand(time(NULL));
    printf("|||||||| Sorteando um numero aleatorio ||||||||\n");
    numeroR = rand()% (100-0)+1;
    do{
        printf("Escolha um Numero: ");
        scanf("%d", &numeroE);
        tent++;
    if (numeroR > numeroE ){
        printf("Seu Numero e Maior que o numero sorteado\n");
    }
    else if (numeroR < numeroE){
        printf("Seu Numero e Menor que o numero sorteado\n");
    }
    else{
        printf("Parabens, voce Acertou!\n");}
    }while (numeroE != numeroR);
    printf("Quantidade de Tentativas %i\n", tent);

    printf("Deseja Tentar Novamente? (S/N):");
    scanf("\n%c", &esc);
    if(esc == 's' || esc == 'S')
        main();
    else
    printf("Jogo Terminado!");



    return 0;
}
