#include <stdio.h>
const int tam=100;
/*Considere um vetor de tamanho máximo 100 de números reais. Solicite ao usuário qual o limite superior 
válido que ele deseja e em seguida desenvolva um algoritmo que leia o vetor até o limite superior escolhido e 
determine qual é o menor valor existente no vetor. 
O algoritmo deve ainda subtrair de todos os elementos este valor. Exibir o vetor resultado.*/ 

main ()
{
	int i, lim_sup;
	float vetor[tam], menor, novo[tam];
	
	menor=9999999.99;
	
	printf ("\n\n\t Digite o tamanho do seu vetor: ");
	scanf ("%i", &lim_sup);
	if (lim_sup>100)
		printf ("\n\n\t Escolha outro valor.");
	else
	{
		printf ("\n\n\t Digite os valores do vetor: ");
		for (i=0; i<lim_sup; i++)
		{
			scanf ("%f", &vetor[i]);
		}
		
		for (i=0; i<lim_sup; i++)
		{
			if (vetor[i]<menor)
				menor=vetor[i];
		}
		
		printf ("\n\n\t O menor valor do vetor e: %.2f", menor);
		
		printf ("\n\n\t O novo vetor e: ");
		for (i=0; i<lim_sup; i++)
		{
			novo[i]=vetor[i]-menor;
			printf ("%6.2f", novo[i]);
		}
	}
}
