#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 15

int main()
{
    int i, j;
    int Matriz[TAMANHO][TAMANHO];
    srand(time(NULL)); //MELHORAR A ALEATORIEDADE
    for(i = 0; i < TAMANHO; i++)
    {
        for(j = 0; j < TAMANHO; j++)
        {
            if(i + j == TAMANHO - 1)
            {
                Matriz[i][j] = rand() % 90 + 10;
                if(Matriz[i][j] % 2 != 0)
                    Matriz[i][j] = Matriz[i][j] * 2;
            }
            else
                Matriz[i][j] = 0;
        }
    }

    printf("Matriz[%i][%i]: \n", TAMANHO,TAMANHO);
    for(i = 0; i < TAMANHO; i++)
    {
        for(j = 0; j < TAMANHO; j++)
            printf("\t%i", Matriz[i][j]);
        printf("\n");
    }
    return 0;
}
