#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 5

struct ingredientes {
  char nome[25];
  int quantidade;
  char medida[20];
};

struct receitas {
  char nome[50];
  char descricao[500];
  int quant_ingre;
  struct ingredientes ingred[25];
};
typedef struct receitas receitas;

int verifica(char *a, char *b);

int main(void) {
  receitas receita[tam];
  int qnt = 0, confere = 0;
  char nome[50];

  for (int i = 0; i < tam; i++) {
    printf("\n\nDigite o nome da receita:");
    gets(receita[i].nome);

    printf("Digite a descrição da receita:");
    gets(receita[i].descricao);

    printf("Digite a quantidade de ingredientes, sendo no máximo 25:");
    scanf("%d", &receita[i].quant_ingre);
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
      ;

    qnt = receita[i].quant_ingre;

    for (int j = 0; j < qnt; j++) {
      printf("\nDigite o nome do ingrediente: ");
      gets(receita[i].ingred[j].nome);

      printf("Digite a quantidade do ingrediente: ");
      scanf("%d", &receita[i].ingred[j].quantidade);
      int c;
      while ((c = getchar()) != '\n' && c != EOF);

      printf("Digite o tipo de medida do ingrediente:");
      gets(receita[i].ingred[j].medida);
    }
  }

  printf("\n\nDigite o nome da receita: ");
  gets(nome);

  for (int i = 0; i < tam; i++) {
    if (strlen(nome) == strlen(receita[i].nome)) {
      confere = verifica(nome, receita[i].nome);
      if (confere == 1) {
        printf("\n\nNOME DA RECEITA: %s", receita[i].nome);
        printf("\nDESCRIÇÃO DA RECEITA: %s", receita[i].descricao);
        printf("\nA RECEITA POSSUI %d INGREDIENTES, SÃO ELES: ",receita[i].quant_ingre);
        int qnt = receita[i].quant_ingre;
        for (int j = 0; j < qnt; j++) {
          printf("\n\n%s", receita[i].ingred[j].nome);
          printf("\n%d %s", receita[i].ingred[j].quantidade,
                 receita[i].ingred[j].medida);
        }
      }
    }
  }
  if (confere == 0) {
    printf("\nRECEITA NÃO EXISTE!");
  }

  return 0;
}

int verifica(char *a, char *b) {
  int cont = 0;
  for (int i = 0; i < strlen(a); i++) {
    if (a[i] == b[i]) {
      cont++;
    }
  }
  if (cont == strlen(a)) {
    return 1;
  } else {
    return 0;
  }
}
