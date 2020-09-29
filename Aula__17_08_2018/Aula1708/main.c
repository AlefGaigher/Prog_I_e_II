//MATRIZ: EXERCICIO 8: USAR RAND
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LINHAS 4
#define COLUNAS 3

int main()
{
    int A[LINHAS] [COLUNAS], B[LINHAS] [COLUNAS], C[LINHAS] [COLUNAS];
    int i, j;
    srand(time(NULL)); // MELHORA A ALEATORIEDADE.
    for(i = 0; i < LINHAS; i++)
    {
        j = 0;
        while(j < COLUNAS)
        {
            A[i][j] = rand() % 99 + 2; // INTERVALO: [2,100]
            B[i][j] = rand() % 99 + 2; // INTERVALO: [2,100]
            // A é PAR e B é PAR
            if (A[i][j] % 2 == 0 && B[i][j] % 2 == 0)
            {
                if(A[i][j] % B[i][j] == 0)
                    C[i][j] = 1;
                else
                    C[i][j] = 0;
                j++;
            }
        }
    }
    printf("Matriz A[%i][%i]: \n", LINHAS, COLUNAS);
    for(i = 0; i < LINHAS; i++)
    {
        for(j = 0; j < COLUNAS; j++)
            printf("\t%i", A[i][j]);
        printf("\n");
    }
    printf("Matriz B[%i][%i]: \n", LINHAS, COLUNAS);
    for(i = 0; i < LINHAS; i++)
    {
        for(j = 0; j < COLUNAS; j++)
            printf("\t%i", B[i][j]);
        printf("\n");
    }
    printf("Matriz C[%i][%i]: \n", LINHAS, COLUNAS);
    for(i = 0; i < LINHAS; i++)
    {
        for(j = 0; j < COLUNAS; j++)
            printf("\t%i", C[i][j]);
        printf("\n");
    }
    return 0;
}
