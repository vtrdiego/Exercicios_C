#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n=5,*p;

  p=malloc(n*sizeof(int));
  if(p==NULL){
    printf("ERRO: Memória insuficiente!");
    exit(1);
  }

  for(int i=0;i<n;i++){
    printf("Digite o valor para preencher o vetor %d:",i);
    scanf("%d",&p[i]);
  }

  for(int i=0;i<n;i++){
    printf("%d\n",p[i]);
  }
  
  return 0;
  free(p);
}