#include <stdio.h>
#define tam 50

int main(void) {
  int vetor[tam],n=0,existe=0,posi=0;

  for(int i=0;i<tam;i++){
    printf("Digite o valor do vetor:");
    scanf("%d",&vetor[i]);
  }
  printf("\nDigite um número para saber se existe no vetor:");
  scanf("%d",&n);

  for(int i=0;i<tam;i++){
    if(vetor[i]==n){
      existe=1;
      posi=i;
    }
    }
    if(existe){
       printf("\nO número existe no vetor! Está na posição:%d",posi);
    }else{
       printf("\nO número não existe no vetor!");
    }
  return 0;
}