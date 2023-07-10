#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dados{
char nome[30];
int idade;
char sexo;
int cpf;
int data_nasci;
int cod_setor;
char cargo[30];
float salario;
};

int main(void) {
  struct dados coleta;
  
  printf("\nNome do funcionário: ");
  fflush(stdin);
  gets(coleta.nome);
  

  printf("\nIdade do funcionário: ");
  scanf("%d",&coleta.idade);

  printf("\nSexo do funcionário: ");
  scanf(" %c",&coleta.sexo);

  printf("\nDigite o cpf do funcionário: ");
  scanf("%d",&coleta.cpf);

  printf("\nDigite a data de nascimento do funcionário: ");
  scanf("%d",&coleta.data_nasci);

  printf("\nDigite o código de setor do funcionário: ");
  scanf("%d",&coleta.cod_setor);
int c; while ((c = getchar()) != '\n' && c != EOF);

  printf("\nDigite o cargo do funcionário: ");
  gets(coleta.cargo);

  printf("\nDigite o salário do funcionários: ");
  scanf("%f",&coleta.salario);

  printf("\n\nO nome é: %s\nA idade é: %d\nO sexo é: %c\nO cpf é: %d\nA data de nascimento é: %d\nO código do setor é: %d\nO cargo é: %s\nO salário é: R$%.2f",coleta.nome,coleta.idade,coleta.sexo,coleta.cpf,coleta.data_nasci,coleta.cod_setor,coleta.cargo,coleta.salario);
  
  return 0;
}