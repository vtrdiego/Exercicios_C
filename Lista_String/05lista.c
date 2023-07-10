#include <stdio.h>
#include <string.h>

int main(void) {
  char nome[50];
  int vogal=0;

  printf("Digite o nome:");
  gets(nome);

  for(int i=0;i<strlen(nome);i++){
    if(nome[i]=='a'||nome[i]=='e'||nome[i]=='i'||
      nome[i]=='o'||nome[i]=='u'){
      vogal++;
      }
  }

  printf("\nO nome tem %d vogais",vogal);  


  
  
  return 0;
}