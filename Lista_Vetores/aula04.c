#include <stdio.h>
#define tam 200
int main(void) {
int vetor[tam],codigo=1;

  for(int i=0;i<tam;i++){
    printf("\nDigite o valor do vetor:");
    scanf("%d",&vetor[i]);
  }
    printf("\nDigite o código:");
    scanf("%d",&codigo);
    if(codigo==1){
      for(int i=0;i<tam;i++){
        printf("\n%d",vetor[i]);
      }
      }
    if(codigo==2){
      for(int i=tam-1;i>=0;i--){
        printf("\n%d",vetor[i]);
    }
    }else{
      printf("\nERRO!");
    }
      
  
  return 0;
}