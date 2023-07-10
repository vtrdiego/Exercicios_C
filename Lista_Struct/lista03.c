#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 5

struct produto {
  int codigo;
  char descricao[15];
  float valor;
  int quant;
};
typedef struct produto prod;

int main(void) {
  prod info[tam];
  int cd=0,qnt=0,cont=0;

  for (int i = 0; i <tam; i++) {
    printf("\nDigite o código do produto: ");
    scanf("%d", &info[i].codigo);
    int c; while ((c = getchar()) != '\n' && c != EOF);

    printf("\nDigite a descrição do produto:");
    gets(info[i].descricao);

    printf("\nDigite o valor do produto:");
    scanf("%f", &info[i].valor);

    printf("\nDigite a quantidade do produto:");
    scanf("%d", &info[i].quant);
  }

  printf("\n\nDigite o código do produto:");
  scanf("%d",&cd);

  printf("\nDigite a quantidade desejada:");
  scanf("%d",&qnt);

  for(int i=0;i<tam;i++){
    if(cd==info[i].codigo){
      if(qnt>0 && qnt<=info[i].quant){
        printf("\nPedido realizado!\nestoque atualizado :%d",(info[i].quant)-qnt);
      }else{
        printf("\nInfelizmento o produto não tem estoque suficiente!");
      }
    }else{
      cont++;
    }
  }
  if(cont==tam){
    printf("\nCódigo do produto incorreto!");
  }

  return 0;
}


