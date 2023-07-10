#include <stdio.h>
#define tam 20
int main(void) {
  int vetorA[tam],vetorB[tam],vetorResp[tam];

  for(int i=0;i<tam;i++){
    printf("\nDigite o valor do vetor A:");
    scanf("%d",&vetorA[i]);
  }
  for(int i=0;i<tam;i++){
    printf("\nDigite o valor do vetor B:");
    scanf("%d",&vetorB[i]);
  }
  for(int i=0;i<tam;i++){
    vetorResp[i]=vetorA[i]-vetorB[i];
  }
  for(int i=0;i<tam;i++){
    printf("\n%d",vetorResp[i]);
  }
  
  return 0;
}