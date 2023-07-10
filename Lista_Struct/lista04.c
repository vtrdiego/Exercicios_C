#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 50

struct produto{
int codigo;
char descricao[50];
float valor;
};
typedef struct produto produto;

int main(void) {
  produto prod[tam];
  float reajuste=0;

  for(int i=0;i<tam;i++){
    printf("\nDigite o código do produto:");
    scanf("%d",&prod[i].codigo);
    int c; while ((c = getchar()) != '\n' && c != EOF);

    printf("\nDigite a descrição do produto:");
    gets(prod[i].descricao);

    printf("\nDigite o valor do produto:");
    scanf("%f",&prod[i].valor);
  }

  printf("\n\nDigite o valor percentual do reajuste:");
  scanf("%f",&reajuste);

  for(int i=0;i<tam;i++){
    printf("\nO valor do produto é: %.2f",prod[i].valor);
  }
  printf("\n\n");

  for(int i=0;i<tam;i++){
    printf("O valor do produto com reajuste é:%.2f",((prod[i].valor)*reajuste)/100+(prod[i].valor));
  }
    

  
  

  return 0;
}


