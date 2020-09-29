#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LINHAS 2 // AMOSTRAS
#define COLUNAS 4 // VARIAVEIS

int main()
{
    int i, j, MenorTempo = 999999999, iVencedor;
    int Matriz[LINHAS][COLUNAS];
    srand(time(NULL)); //MELHORAR A ALEATORIEDADE

    printf("Dados dos Atletas: \n");
    for(i = 0; i <LINHAS; i++)
    {
        j = 0;
        printf("Dados do Atleta: %i\n", i + 1);
        while( j < COLUNAS)
        {
            if(j == 0)
            {
                printf("Matricula:");
                scanf("%i", &Matriz[i][j]);
            }
            if(j == 1)
            {
                printf("Natacao:");
                scanf("%i", &Matriz[i][j]);
            }
            if(j == 2)
            {
                printf("Corrida:");
                scanf("%i", &Matriz[i][j]);
            }
            if(j == 3)
            {
                printf("Ciclismo:");
                scanf("%i", &Matriz[i][j]);
            }
            j++;
        }

        if (Matriz[i][1] + Matriz[i][2] + Matriz[i][3] < MenorTempo)
            {
                MenorTempo = Matriz[i][1] + Matriz[i][2] + Matriz[i][3];
                iVencedor = i;
            }
    }
    printf("Matriz C[%i][%i]: \n", LINHAS, COLUNAS);
    for(i = 0; i < LINHAS; i++)
    {
        for(j = 0; j < COLUNAS; j++)
            printf("\t%i", Matriz[i][j]);
        printf("\n");
    }
    printf("Matricula do Vencedor: %i\n", Matriz[iVencedor][0]);

    return 0;
}
