#include <stdio.h>
#define tam 15
int main(void) {
  int vetorA[tam],vetorB[tam],quadrado[tam];

  for(int i=0;i<tam;i++){
    printf("Digite o valor do vetor A:");
    scanf("%d",&vetorA[i]);
  }
  for(int i=0;i<tam;i++){
    vetorB[i]=vetorA[i]*vetorA[i];
  }
  for(int i=0;i<tam;i++){
    printf("\nVetor:%d - Quadrado:%d",vetorA[i],vetorB[i]);
  }
  
  return 0;
}