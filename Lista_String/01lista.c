#include <stdio.h>
#include <string.h>

int main(void) {
  char nome[50];

  printf("Digite o nome:");
  gets(nome);

  if(nome[0]=='A'||nome[0]=='a'){
    printf("\nSeu nome é %s",nome);
  }
    
 

 
  


  
  
  return 0;
}