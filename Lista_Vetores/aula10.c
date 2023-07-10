#include <stdio.h>
#define tam 100
int main(void) {
  int somaPar=0,somaImp=0,incr=0,vetor[tam];

  for(int i=0;i<tam;i++){
    vetor[i]=incr;
    if(vetor[i]%2==0){
    somaPar+=vetor[i];
    }
    if(vetor[i]%2!=0){
      somaImp+=vetor[i];
    }
    incr++;
  }
printf("\nA soma dos índices pares é:%d",somaPar);
printf("\nA soma dos índices ímpares é:%d",somaImp);
  
  return 0;
}