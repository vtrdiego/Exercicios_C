#include <stdio.h>
#define tam 20
int main(void) {
int vetorA[tam],vetorB[tam],numero;

  for(int i=0;i<tam;i++){
    printf("Digite o número do vetorA:");
    scanf("%d",&vetorA[i]);
    vetorB[i]=vetorA[i];
    }
  for(int i=0;i<tam;i++){
    printf("%d\n",vetorA[i]);
  }
  for(int i=tam-1;i>=0;i--){
    printf("\n%d",vetorB[i]);
  }
  
  
  return 0;
}