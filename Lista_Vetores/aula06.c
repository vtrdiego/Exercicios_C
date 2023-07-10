#include <stdio.h>
#define tam 5
int main(void) {
  int vetorA[tam],vetorB[tam],vetorC[10],x=4;

  for(int i=0;i<tam;i++){
    printf("\nDigite o valor do vetor A:");
    scanf("%d",&vetorA[i]);
  }
  for(int i=0;i<tam;i++){
    printf("\nDigite o valor do vetor B:");
    scanf("%d",&vetorB[i]);
  }
  for(int i=0;i<10;i++){
    vetorC[i]=vetorA[i];
    }
  for(int i=0;i<tam;i++){
    x++;
    vetorC[x]=vetorB[i];
    }
  for(int i=0;i<10;i++){
    printf("\n%d",vetorC[i]);
  }
  return 0;
}