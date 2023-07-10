#include <stdio.h>
#define tam 80
int main(void) {
  int vetorA[tam],vetorB[tam];

  for(int i=0;i<tam;i++){
    printf("Digite o valor do vetorA:");
    scanf("%d",&vetorA[i]);
  }
  for(int i=0;i<tam;i++){
    vetorB[i]=vetorA[i]*3;
  }
  for(int i=0;i<tam;i++){
    printf("\n%d",vetorB[i]);
    }
  return 0;
}