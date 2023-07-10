#include <stdio.h>
#include <stdlib.h>

void confere(int *ptr,int n);

int main(void) {
  int r,n,*p;

  printf("Digite o tamanho do vetor:");
  scanf("%d",&n);
  p=malloc(n*sizeof(int));
  if(p==NULL){
    printf("ERRO: Memória insuficiente!");
    exit(1);
  }

  for(int i=0;i<n;i++){
    printf("Digite o valor para preencher o vetor %d:",i);
    scanf("%d",&p[i]);
  }

  confere(p,n);
  
  return 0;
  free(p);
}

void confere(int *ptr,int n){
  int par=0,imp=0;
  for(int i=0;i<n;i++){
    if(ptr[i]%2==0){
      par++;
    }else{
      imp++;
    }
  }
  printf("\nExiste %d números pares!",par);
  printf("\nExiste %d números ímpares!",imp);
}