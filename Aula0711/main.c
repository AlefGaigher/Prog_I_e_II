#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHOFICHA 10
#define TAMANHOCAMPO 50

typedef struct ficha
{
    char nome[TAMANHOCAMPO];
    char sexo[TAMANHOCAMPO];
    float altura;
    int colocacao;
    char estadocivil[TAMANHOCAMPO];
}FICHA;

void SalvarNovoArquivo(FILE *Arquivo, FICHA Atletas[TAMANHOCAMPO], int *Quant);

int main()
{
    int i = 0, j =0 ;    		/*Indice de contagem do vetor Auxiliar (Aux)*/
    char C;        				/*Caractere Auxiliar: Ler um a um do arquivo*/
    int Opcao;     				/*Opcao do Menu*/
    int Quant = 0; 				/*Conta a quantidade de Registros no arquivo*/
    int Campo = 1; 				/*Acessa os Campos dos Registros: Vetor Ficha*/
    FILE *Arquivo; 				/*Arquivo: Variável do tipo File (arquivo)*/
    char Aux[TAMANHOCAMPO]; 	/*Monta a linha do arquivo*/
    float aux3, aux4;           /*Variáveis float auxiliares*/
    char auxstr[TAMANHOCAMPO], auxstr2[TAMANHOCAMPO]; /*Variáveis string auxiliares*/
    int inicio=0, meio=0, fim=0, S=1, Procurado; /*Variáveis da Pesquisa Binária*/

    FICHA Atletas[TAMANHOFICHA];

    do
	{
		printf("\n\n==========================================\n");
		printf("    MENU DE OPCAO: \n");
        printf("\t  [1]: Carregar arquivo e exibir\n");
        printf("\t  [2]: Ordenar dados e exibir\n");
        printf("\t  [3]: Pesquisar dados e exibir\n");
        printf("\t  [4]: Gravar os dados ORDENADOS\n");
        printf("\t  [0]: Sair do programa\n");
        printf("==========================================\n\n");
        printf("\t  Sua opcao: "); scanf("%i", &Opcao);

        /*OP 1 : Carregar e exibir arquivo*/

        if(Opcao == 1)
		{
			system("cls");
			printf("DADOS DO ARQUIVO: \n\n");
			Arquivo = fopen("Arquivo1.txt", "r");

			if(Arquivo == 0)
			{
				printf("Erro na abertura do arquivo!\n\n\n");
				fclose(Arquivo);
			}
			else
			{
				i=0; Quant=0; Campo=1;
				do
				{
					C = getc(Arquivo);
					if(C != '\n' && C != EOF)
					{
						Aux[i] = C;
						i++;
					}
					else
					{
						Aux[i] = '\0';
						switch(Campo)
						{
							case 1:
								strcpy(Atletas[Quant].nome, Aux);
								break;
							case 2:
								strcpy(Atletas[Quant].sexo, Aux);
								break;
							case 3:
								Atletas[Quant].altura = atof(Aux);
								break;
							case 4:
								Atletas[Quant].colocacao = atof(Aux);
								break;
							case 5:
								strcpy(Atletas[Quant].estadocivil, Aux);
								Campo = 0; /*Reinicia para o próximo registro*/
								Quant++;   /*Incrementa 1 para o próximo registro*/
						}
						Campo++;
						i = 0;
					}
				}while(C != EOF);

				fclose(Arquivo);

				for(i = 0; i < Quant; i++)
				{
					printf("Nadador %i:\n", i + 1);
                    printf("\t  Nome           : %s\n", Atletas[i].nome);
                    printf("\t  Sexo           : %s\n", Atletas[i].sexo);
                    printf("\t  Altura         : %.2f\n", Atletas[i].altura);
                    printf("\t  Colocacao      : %i\n", Atletas[i].colocacao);
                    printf("\t  Estado Civil   : %s\n", Atletas[i].estadocivil);
                    printf("===============================================\n\n");
				}
			}
		}

		/*OP 2 : Ordenar dados e exibir*/

		else if(Opcao == 2)
		{
			system("cls");

			Arquivo = fopen("Arquivo1.txt", "r");

			if(Arquivo == 0)
			{
				printf("ERRO: Falha na abertura do Arquivo!!!");
				fclose(Arquivo);
			}
			else
			{
				i = 0;
				Quant = 0;
				Campo = 1;

				do
				{
					C = getc(Arquivo);
					if(C != '\n' && C != EOF)
					{
						Aux[i] = C;
						i++;
					}
					else
					{
						Aux[i] = '\0';
						switch(Campo)
						{
							case 1:
								strcpy(Atletas[Quant].nome, Aux);
								break;
							case 2:
								strcpy(Atletas[Quant].sexo, Aux);
								break;
							case 3:
								Atletas[Quant].altura = atof(Aux);
								break;
							case 4:
								Atletas[Quant].colocacao = atof(Aux);
								break;
							case 5:
								strcpy(Atletas[Quant].estadocivil, Aux);
								Campo = 0; /*Reinicia para o próximo registro*/
								Quant++;   /*Incrementa 1 para o próximo registro*/
						}
						Campo++;
						i = 0;
					}
				}while(C != EOF);

				fclose(Arquivo);

				for(i=0; i<TAMANHOFICHA; i++)
				{
					for(j=i+1; j<TAMANHOFICHA; j++)
					{
						if(Atletas[i].colocacao > Atletas[j].colocacao)
						{
							strcpy(auxstr, Atletas[j].nome);
							strcpy(Atletas[j].nome, Atletas[i].nome);
							strcpy(Atletas[i].nome, auxstr);

							strcpy(auxstr2, Atletas[j].sexo);
							strcpy(Atletas[j].sexo, Atletas[i].sexo);
							strcpy(Atletas[i].sexo, auxstr2);

							aux3 = Atletas[i].altura;
							Atletas[i].altura = Atletas[j].altura;
							Atletas[j].altura = aux3;

							aux4 = Atletas[i].colocacao;
							Atletas[i].colocacao = Atletas[j].colocacao;
							Atletas[j].colocacao = aux4;

							strcpy(auxstr, Atletas[j].estadocivil);
							strcpy(Atletas[j].estadocivil, Atletas[i].estadocivil);
							strcpy(Atletas[i].estadocivil, auxstr);
						}
					}
				}

				aux3 = aux4 = 0;

				printf("ATLETAS ORDENADOS POR COLOCACAO:\n\n");

				for(i=0; i< TAMANHOFICHA; i++)
				{
					printf("    Atleta %i:\n", i + 1);
                    printf("\t  Nome           : %s\n", Atletas[i].nome);
                    printf("\t  Sexo           : %s\n", Atletas[i].sexo);
                    printf("\t  Altura         : %.2f\n", Atletas[i].altura);
                    printf("\t  Colocacao      : %i\n", Atletas[i].colocacao);
                    printf("\t  Estado Civil   : %s\n", Atletas[i].estadocivil);
                    printf("===============================================\n\n");
				}
			}
		}

		/*OP 3 : Pesquisa (Binária) de dados e exibir*/

		else if(Opcao == 3)
		{
			system("cls");

			Arquivo = fopen("Arquivo1.txt", "r");

			if(Arquivo == 0)
			{
				printf("ERRO: Falha na abertura do Arquivo!!!");
				fclose(Arquivo);
			}
			else
			{
				i = 0;
				Quant = 0;
				Campo = 1;

				do
				{
					C = getc(Arquivo);
					if(C != '\n' && C != EOF)
					{
						Aux[i] = C;
						i++;
					}
					else
					{
						Aux[i] = '\0';
						switch(Campo)
						{
							case 1:
								strcpy(Atletas[Quant].nome, Aux);
								break;
							case 2:
								strcpy(Atletas[Quant].sexo, Aux);
								break;
							case 3:
								Atletas[Quant].altura = atof(Aux);
								break;
							case 4:
								Atletas[Quant].colocacao = atof(Aux);
								break;
							case 5:
								strcpy(Atletas[Quant].estadocivil, Aux);
								Campo = 0; /*Reinicia para o próximo registro*/
								Quant++;   /*Incrementa 1 para o próximo registro*/
						}
						Campo++;
						i = 0;
					}
				}while(C != EOF);

				fclose(Arquivo);

				for(i = 0; i < TAMANHOFICHA; i++)
				{
					for(j = i + 1; j < TAMANHOFICHA; j++)
					{
						if(Atletas[i].colocacao > Atletas[j].colocacao)
						{
							strcpy(auxstr, Atletas[j].nome);
							strcpy(Atletas[j].nome, Atletas[i].nome);
							strcpy(Atletas[i].nome, auxstr);

							strcpy(auxstr2, Atletas[j].sexo);
							strcpy(Atletas[j].sexo, Atletas[i].sexo);
							strcpy(Atletas[i].sexo, auxstr2);

							aux3 = Atletas[i].altura;
							Atletas[i].altura = Atletas[j].altura;
							Atletas[j].altura = aux3;

							aux4 = Atletas[i].colocacao;
							Atletas[i].colocacao = Atletas[j].colocacao;
							Atletas[j].colocacao = aux4;

							strcpy(auxstr, Atletas[j].estadocivil);
							strcpy(Atletas[j].estadocivil, Atletas[i].estadocivil);
							strcpy(Atletas[i].estadocivil, auxstr);
						}
					}
				}

				aux3 = aux4 = 0;


				printf("Digite a COLOCACAO que esta procurando: ");
				scanf("%i", &Procurado);

				inicio = 0;
                fim = TAMANHOFICHA - 1;

                while((inicio <= fim) && (S != 0))
                {

                    meio = (inicio + fim)/2;

                    if(Atletas[meio].colocacao < Procurado)
                    {
                        inicio = meio + 1;
                    }
                    if(Atletas[meio].colocacao > Procurado)
                    {
                        fim = meio - 1;
                    }
                    if(Atletas[meio].colocacao == Procurado)
                    {
						S = 0;

                        printf("    Atleta %i:\n", i + 1);
                        printf("\t  Nome           : %s\n", Atletas[meio].nome);
                        printf("\t  Sexo           : %s\n", Atletas[meio].sexo);
                        printf("\t  Altura         : %.2f\n", Atletas[meio].altura);
                        printf("\t  Colocacao      : %i\n", Atletas[meio].colocacao);
                        printf("\t  Estado Civil   : %s\n", Atletas[meio].estadocivil);
                    }

                }

                if(inicio > fim)
                {
                    printf("\nNao ha nenhum atleta com essa colocacao!\n\n");
                }

				inicio = meio = fim = 0;

				S = 1;
			}
		}

		/*OP 4 : Gravar os dados ORDENADOS*/

		else if(Opcao == 4)
		{
			system("cls");

			Arquivo = fopen("Arquivo1.txt", "r");

			if(Arquivo == 0)
			{
				printf("ERRO: Falha na abertura do Arquivo!!!");
				fclose(Arquivo);
			}
			else
			{
				i = 0;
				Quant = 0;
				Campo = 1;

				do
				{
					C = getc(Arquivo);
					if(C != '\n' && C != EOF)
					{
						Aux[i] = C;
						i++;
					}
					else
					{
						Aux[i] = '\0';
						switch(Campo)
						{
							case 1:
								strcpy(Atletas[Quant].nome, Aux);
								break;
							case 2:
								strcpy(Atletas[Quant].sexo, Aux);
								break;
							case 3:
								Atletas[Quant].altura = atof(Aux);
								break;
							case 4:
								Atletas[Quant].colocacao = atof(Aux);
								break;
							case 5:
								strcpy(Atletas[Quant].estadocivil, Aux);
								Campo = 0; /*Reinicia para o próximo registro*/
								Quant++;   /*Incrementa 1 para o próximo registro*/
						}
						Campo++;
						i = 0;
					}
				}while(C != EOF);

				fclose(Arquivo);

				for(i  = 0; i < TAMANHOFICHA; i++)
				{
					for(j = i + 1; j < TAMANHOFICHA; j++)
					{
						if(Atletas[i].colocacao > Atletas[j].colocacao)
						{
							strcpy(auxstr, Atletas[j].nome);
							strcpy(Atletas[j].nome, Atletas[i].nome);
							strcpy(Atletas[i].nome, auxstr);

							strcpy(auxstr2, Atletas[j].sexo);
							strcpy(Atletas[j].sexo, Atletas[i].sexo);
							strcpy(Atletas[i].sexo, auxstr2);

							aux3 = Atletas[i].altura;
							Atletas[i].altura = Atletas[j].altura;
							Atletas[j].altura = aux3;

							aux4 = Atletas[i].colocacao;
							Atletas[i].colocacao = Atletas[j].colocacao;
							Atletas[j].colocacao = aux4;

							strcpy(auxstr, Atletas[j].estadocivil);
							strcpy(Atletas[j].estadocivil, Atletas[i].estadocivil);
							strcpy(Atletas[i].estadocivil, auxstr);
						}
					}
				}

				aux3 = aux4 = 0;

				/*printf("    ORDENADO POR COLOCACAO:\n");

				for(i=0; i< TAMANHOFICHA; i++)
				{
					printf("    Atleta %i:\n", i + 1);
                    printf("\t  Nome           : %s\n", Atletas[i].nome);
                    printf("\t  Sexo           : %s\n", Atletas[i].sexo);
                    printf("\t  Altura         : %.2f\n", Atletas[i].altura);
                    printf("\t  Colocacao      : %i\n", Atletas[i].colocacao);
                    printf("\t  Estado Civil   : %s\n", Atletas[i].estadocivil);
                    printf("===============================================\n\n");
				}*/
			}
			SalvarNovoArquivo(fopen("ArquivoOrdenado.txt", "w"), Atletas, &Quant);
			printf("NOVO ARQUIVO ORDENADO SALVO COM SUCESSO!!!\n");
		}

		/*OP 5 : Sair do Programa*/

		else if(Opcao == 0)
		{
			system("cls");
			printf("\n\n ### FIM DO PROGRAMA ### \n\n");
		}

	}while(Opcao);

	return 0;
}

void SalvarNovoArquivo(FILE *Arquivo, FICHA Atletas[TAMANHOCAMPO], int *Quant)
{
	int i;
	int aux = *Quant;
	for(i = 0; i < aux; i++)
	{
		fputs(Atletas[i].nome, Arquivo);
		fputc('\n', Arquivo);

		fputs(Atletas[i].sexo, Arquivo);
		fputc('\n', Arquivo);

		fprintf(Arquivo, "%.2f", Atletas[i].altura);
		fputc('\n', Arquivo);

		fprintf(Arquivo, "%i", Atletas[i].colocacao);
		fputc('\n', Arquivo);

		fputs(Atletas[i].estadocivil, Arquivo);
		fputc('\n', Arquivo);
	}
}
