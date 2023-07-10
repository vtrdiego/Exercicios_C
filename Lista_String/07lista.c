#include <stdio.h>
#include <string.h>

int main(void) {
  char nome[50],letra;
  int c=0;

  printf("Digite o nome:");
  gets(nome);

  printf("\nAgora digite a letra que deseja contar:");
  scanf(" %c",&letra);

  for(int i=0;i<strlen(nome);i++){
    if(nome[i]==letra){
      c++;
      }
  }

  printf("\na letra '%c' aparece %d vezes",letra,c);  


  
  
  return 0;
}