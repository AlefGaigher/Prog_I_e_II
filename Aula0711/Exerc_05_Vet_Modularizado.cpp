/*Faca um algoritmo que leia a media dos 60 alunos da disciplina de programacao e imprima:
- A nota media da turma;
- A menor e a maior nota da turma;
- O total de alunos cuja nota e inferior a nota media da turma.

VOID= o módulo declarado não retorna nada, nenhum valor numerico */

#include <stdio.h>
#include <stdlib.h>

const int tam=6;
int i;

void le_medias(float vm[tam]);
float calc_mt(float vm[tam]);
float acha_maior(float vm[tam]);
float acha_menor(float vm[tam]);
int abaixo_media(float vm[tam], float mt);
void mostra_dados(float mt, float maior, float menor, int abaixo);
	
main ()
{
	float medias[tam], media_t, maior_m, menor_m;
	int total;
	
	//Entrada de Dados
	le_medias(medias);
	
	//Processamento de Dados
	media_t=calc_mt(medias);
	maior_m=acha_maior(medias);
	menor_m=acha_menor(medias);
	total=abaixo_media(medias, media_t);
	
	//Saída de Dados
	mostra_dados(media_t, maior_m, menor_m, total);
}

void le_medias(float vm[tam])
{
	printf ("\n\n\t Digite as medias dos %i alunos:\n", tam);
	for (i=0; i<tam; i++)
	{
		printf ("\n\n\t %io aluno: ", i+1);
		scanf ("%f", &vm[i]);
	}
}

float calc_mt(float vm[tam])
{
	float mt, soma=0;
	for (i=0; i<tam; i++)
		soma=soma+vm[i];
	
	mt=soma/tam;
	
	return (mt);
}

float acha_maior(float vm[tam])
{
	float maior=vm[0];
	for (i=1; i<tam; i++)
		if (vm[i]>maior)
			maior=vm[i];
	
	return (maior);	
}

float acha_menor(float vm[tam])
{
	float menor=vm[0];
	for (i=1; i<tam; i++)
		if (vm[i]<menor)
			menor=vm[i];
	
	return (menor);	
}

int abaixo_media(float vm[tam], float mt)
{
	int cont=0;
	for (i=0; i<tam; i++)
		if (vm[i]<mt)
			cont++;
	
	return (cont);
}

void mostra_dados(float mt, float maior, float menor, int abaixo)
{
	printf ("\n\n\t Media da turma = %.2f", mt);
	printf ("\n\n\t Maior media da turma = %.2f", maior);
	printf ("\n\n\t Menor media da turma = %.2f", menor);
	printf ("\n\n\t Total de alunos abaixo da media = %i", abaixo);
	printf ("\n\n\n\n");
}



