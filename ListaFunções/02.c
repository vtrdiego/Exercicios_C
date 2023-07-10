#include <stdio.h>
int verificaBissexto(int a);
int ano;

int main(void) {
  
  printf("Digite o ano para saber se é bissexto:");
  scanf("%d",&ano);

  ano=verificaBissexto(ano);

  printf("\nResposta: %d",ano);
  
  return 0;
}

int verificaBissexto(int a){
  if(ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0))
    return 1;
      else
    return 0;
}

