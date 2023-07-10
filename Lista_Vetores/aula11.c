#include <stdio.h>
#define tam 5
int main(void) {
  int vetor[tam],maior=0,menor=99999;

  for(int i=0;i<tam;i++){
    printf("\nDigite o valor do vetor:");
    scanf("%d",&vetor[i]);

    if(vetor[i]>maior){
      maior=vetor[i];
    }
    if(vetor[i]<menor){
      menor=vetor[i];
    }
  }
  for(int i=0;i<tam;i++){
    vetor[0]=maior;
    vetor[4]=menor;
    printf("\n%d",vetor[i]);
    }
  printf("\n\nO maior é:%d",maior);
  printf("\nO menor é:%d",menor);
  
  return 0;
}