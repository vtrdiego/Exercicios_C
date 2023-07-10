#include <stdio.h>
#include <string.h>

int main(void) {
  char nome[50];

  printf("Digite o nome:");
  gets(nome);

  for(int i=0;i<4;i++){
  printf("%c",nome[i]);
    
  }

  
  


  
  
  return 0;
}