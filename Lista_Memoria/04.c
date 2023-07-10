#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i=0,n=5,*p,flag;

  p=malloc(n*sizeof(int));
  if(p==NULL){
    printf("\nERRO! Memória insuficiente!");
    exit(1);
  }

  do{
    printf("Digite o valor de p[%d]: ",i);
    scanf("%d",&p[i]);

    if(i==n-1){
      p=realloc(p,(n+=5)*sizeof(int));
    }
    if(p[i]==999){
      break;
    }
    i++;
    flag=i;
    
  }while(1);

  for(int i=0;i<flag;i++){
    printf("\nO valor da posição %d de P é: %d",i,p[i]);
  }

  free(p);
  return 0;
}