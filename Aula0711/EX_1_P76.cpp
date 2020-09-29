#include <stdio.h>

main ()
{
	const int tam=10;
	float vet[tam], num;
	int i, cont;
	
	cont=0;
	
	printf ("\n\n\t Digite os valores do vetor: ");
	for (i=0; i<tam; i++)
		scanf ("%f", &vet[i]);
	
	printf ("\n\n\t Digite um numero qualquer: ");
	scanf ("%f", &num);
	
	for (i=0; i<tam; i++)
	{
		if (vet[i]==num)
			cont=cont+1;
	}
	printf ("\n\n\t O numero %.2f apareceu %i vezes no vetor.\n", num, cont);
	
}
