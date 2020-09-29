#include <stdio.h>
#include <stdlib.h>

int main()
{
    int voto1=0, voto2=0, opcao;
    float porcentagem1, porcentagem2;
    do
    {
      printf("MENU:\n");
      printf("Escolha 1: Lula \n");
      printf("Escolha 2: Bolsonaro \n");
      printf("Escolha 0: Para Sair \n");
      printf("Digite sua Escoha:\n");
      scanf("%i", &opcao);

      if(opcao >2 || opcao <0)
        printf("Opcao invalida, Tente Novamente!\n");
      else if (opcao == 0)
        printf("Fim do Programa! \n");
      else
      {
       if (opcao == 1)
            voto1++;
       else
            voto2++;
       porcentagem1 = 100.0 * voto1 / (voto1+voto2);
       porcentagem2 = 100.0 * voto2 / (voto1+voto2);
       printf("Porcentagem dos votos de Lula: %.1f %%\n", porcentagem1);
       printf("Porcentagem dos votos de Bolsonaro: %.1f %%\n", porcentagem2);
       }
    } while (opcao!=0);
    return 0;
}
