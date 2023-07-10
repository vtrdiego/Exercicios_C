#include <stdio.h>
int dia,mes,ano,bissexto;
int valida(int d,int m,int a, int bi);

int main(void) {

  printf("Digite o dia:");
  scanf("%d",&dia);
  printf("\nDigite o mês:");
  scanf("%d",&mes);
  printf("\nDigite o ano:");
  scanf("%d",&ano);
  printf("\nDigite 1 para bissexto e 0 para não bissexto:");
  scanf("%d",&bissexto);
  
 int v=valida(dia,mes,ano,bissexto);

  printf("\n\nResposta: %d",v);
  
  return 0;
  }

//Função de validade da data:
int valida(int d,int m,int a, int bi){

if((dia>30 && mes==04 || mes==06 || mes==9 || mes==11)||(bissexto==0 && mes==02 && dia>28)||(bissexto==1 && mes==02 && dia>29))
  return 0;
  else
  return 1;
}
