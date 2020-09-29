#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHOVETOR 10
#define TAMANHOCAMPO 50

const char FILENAME[] = "Arquivo.txt";
typedef struct ficha
{
    char Nome[TAMANHOCAMPO];
    char Sexo[TAMANHOCAMPO];
    float Altura;
    int Colocacao;
    char estadocivil[TAMANHOCAMPO];
}FICHA;

int LerDados(FICHA Atletas[TAMANHOVETOR]);
void ExibirFichas(FICHA Atletas[TAMANHOVETOR], int QuantidadeAtletas);
int PesquisaBinaria(int Atletas[TAMANHOVETOR], int Colocacao);
void OrdenarOsDados (FICHA Atletas[TAMANHOVETOR], int QuantidadeAtletas, char* Opcao);
void SalvarArquivo(FICHA Atletas[TAMANHOCAMPO]);

int main()
{

    int Opcao;
    int QuantidadeAtletas;
    FICHA Atletas[TAMANHOVETOR];
    do{
        printf("********************************* \n");
        printf("MENU DE OPCAO: \n");
        printf("\t  [1]: Carregar arquivo e exibir\n");
        printf("\t  [2]: Ordenar dados e exibir\n");
        printf("\t  [3]: Pesquisar dados e exibir\n");
        printf("\t  [4]: Gravar os dados ORDENADOS\n");
        printf("\t  [0]: Sair do programa\n");
        printf("\t  Sua opcao: ");scanf("%i", &Opcao);
        if (Opcao == 1)
        {
            QuantidadeAtletas = LerDados(Atletas);
            ExibirFichas(Atletas, QuantidadeAtletas);
        }
        else if(Opcao == 2)
        {
            system("cls");
            printf("Ordenar os dados e exibir: \n\n");
            OrdenarOsDados(Atletas, QuantidadeAtletas, "int");
        }
        /* Opcao: Pesquisa (Binária) de dados e exibir */
        else if(Opcao == 3)
        {
            system("cls");
            int Atletas[TAMANHOVETOR] = {4, 5, 9, 10, 11, 12, 15, 20, 21, 30};
            int Colocacao; // Usuário escolhe o valor procurado (desejado)
            int Saida;
            printf("Digite o valor procurado: ");scanf("%i", &Colocacao);

            Saida = PesquisaBinaria(Atletas, Colocacao);

            if (Saida == -1)
                printf("O valor procurado: %i nao foi encontrado.\n\n", Colocacao);
            else
                printf("O valor procurado: %i encontrado no Indice: %i.\n\n", Atletas[Saida], Saida);
        }
        else if(Opcao == 4)
        {
            system("cls");
            printf("Gravar os dados ORDENADOS (Opcional): \n\n");
            SalvarArquivo(Atletas);
        }
        else if(Opcao == 0)
        {
            system("cls");
            printf("FIM DO PROGRAMA.\n\n\n");
        }
    }while(Opcao);
    return 0;
}
int LerDados(FICHA Atletas[TAMANHOVETOR])
{
    int i = 0;
    char C;
    int QuantidadeAtletas = 0;
    int Campo = 1;
    FILE *Arquivo;
    char Auxiliar[TAMANHOCAMPO];
    system("cls");
    printf("Dados do arquivo: \n\n");
    Arquivo = fopen("Arquivo.txt", "r");
    if (Arquivo == 0){
        printf("Erro na abertura do arquivo.\n\n\n");
        fclose(Arquivo);
    }
    else
    {
        i = 0; QuantidadeAtletas = 0; Campo = 1;
        do
        {
            C = getc(Arquivo);
            if (C != '\n' && C != EOF)
            {
                Auxiliar[i] = C;
                i++;
            }
            else
            {
                Auxiliar[i] = '\0';
                switch (Campo)
                {
                    case 1:
                        strcpy(Atletas[QuantidadeAtletas].Nome, Auxiliar);
                        break;
                    case 2:
                        strcpy(Atletas[QuantidadeAtletas].Sexo, Auxiliar);
                        break;
                    case 3:
                        Atletas[QuantidadeAtletas].Altura = atof(Auxiliar);
                        break;
                    case 4:
                        Atletas[QuantidadeAtletas].Colocacao = atoi(Auxiliar);
                        break;
                    case 5:
                        strcpy(Atletas[QuantidadeAtletas].estadocivil, Auxiliar);
                        Campo = 0;
                        QuantidadeAtletas++;
                }
                    Campo++;
                    i = 0;
            }
        }while (C != EOF);
        fclose(Arquivo);
    }
    return QuantidadeAtletas;
}
void ExibirFichas(FICHA Atletas[TAMANHOVETOR], int QuantidadeAtletas)
{
    int i;
    for (i = 0; i < QuantidadeAtletas; i++)
    {
        printf("Nadador %i:\n", i + 1);
        printf("\t  Nome     : %s\n", Atletas[i].Nome);
        printf("\t  Sexo     : %s\n", Atletas[i].Sexo);
        printf("\t  Altura   : %.2f\n", Atletas[i].Altura);
        printf("\t  Colocacao: %i\n", Atletas[i].Colocacao);
        printf("\t  Estado Civil: %s\n", Atletas[i].estadocivil);
    }
}
void SalvarArquivo(FICHA Atletas[TAMANHOCAMPO])
{
    FILE *Arquivo;
    Arquivo = fopen(FILENAME, "w");
    int i;
    for(i = 0; i < TAMANHOCAMPO; i++) {
        fprintf(Arquivo, "%s\n", Atletas[i].Nome);
        fprintf(Arquivo, "%s\n", Atletas[i].Sexo);
        fprintf(Arquivo, "%.2f\n", Atletas[i].Altura);
        fprintf(Arquivo, "%i\n", Atletas[i].Colocacao);
        fprintf(Arquivo, "%s\n", Atletas[i].estadocivil);
    }
    fclose(Arquivo);
}
void OrdenarOsDados(FICHA Atletas[TAMANHOCAMPO], int QuantidadeAtletas, char* Opcao)
{
    int i, trocou, ls = QuantidadeAtletas - 1;
    FICHA Auxiliar;

    if(strcmp(Opcao, "int")) {
        do {
            trocou = 0;
            for(i = 0; i < ls; i++) {
                if(strcmp(Atletas[i].Nome, Atletas[i + 1].Nome) > 0) {
                    Auxiliar = Atletas[i];
                    Atletas[i] = Atletas[i + 1];
                    Atletas[i + 1] = Auxiliar;
                    trocou = 1;
                }
            }
            ls--;
        } while(trocou);
    }
    else if(strcmp(Opcao, "string")) {
        do {
            trocou = 0;
            for(i = 0; i < ls; i++) {
                if(Atletas[i].Colocacao > Atletas[i + 1].Colocacao) {
                    Auxiliar = Atletas[i];
                    Atletas[i] = Atletas[i + 1];
                    Atletas[i + 1] = Auxiliar;
                    trocou = 1;
                }
            }
            ls--;
        } while(trocou);
    }
        for (i = 0; i < QuantidadeAtletas; i++)
        {
        printf("Nadador %i:\n", i + 1);
        printf("\t  Nome     : %s\n", Atletas[i].Nome);
        printf("\t  Sexo     : %s\n", Atletas[i].Sexo);
        printf("\t  Altura   : %.2f\n", Atletas[i].Altura);
        printf("\t  Colocacao: %i\n", Atletas[i].Colocacao);
        printf("\t  Estado Civil: %s\n", Atletas[i].estadocivil);
        }
}
int PesquisaBinaria(int Atletas[TAMANHOVETOR], int Colocacao)
{
    int Saida = -1;             // Índice para elemento NÃO encontrado.
    int Li = 0;                 // Li: Limite Inferior do Vetor.
    int Ls = TAMANHOVETOR - 1;       // Ls: Limite Superior do Vetor.
    int Meio;                   // Índice da metade do vetor.
    while(Li <= Ls && Saida == -1)
    {
        Meio = (Li + Ls) / 2;
        if(Atletas[Meio] == Colocacao)
            Saida = Meio; //Índice do valor procurado pelo usuário
        else if(Atletas[Meio] > Colocacao)
            Ls = Meio - 1;
        else
            Li = Meio + 1;
    }
    return Saida;
}
