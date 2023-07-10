#include <stdio.h>
int main(void) {
int vetor[10];

  for(int i=0;i<10;i++){
    printf("\nDigite o valor do vetor:");
    scanf("%d",&vetor[i]);
    }
  for(int i=0;i<10;i++){
  printf("\nvetor:%d - posição:%d\n",vetor[i],i);
  }
    
  return 0;
}