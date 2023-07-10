#include <stdio.h>
int lerDia(int d);
int lerMes(int m);
int lerAno(int a);
int dia,mes,ano;

int main(void) {
  
  dia=lerDia(dia);
  mes=lerMes(mes);
  ano=lerAno(ano);

  printf("\n\nA data é: \n%d/%d/%d",dia,mes,ano);
  
  return 0;
}
//Função do dia:
int lerDia(int d){
  printf("\nDigite o dia:");
  scanf("%d",&dia);
    while(dia<1 || dia>31){
      printf("\nDia incorreto! Digite novamente:");
      scanf("%d",&dia);
    }
  return dia;
}

//Função do mês:
int lerMes(int m){
  printf("\nDigite o mês:");
  scanf("%d",&mes);
    while(mes<1 || mes>12){
      printf("\nMês incorreto! Digite novamente:");
      scanf("%d",&mes);
    }
  return mes;
}

//Função do ano:
int lerAno(int a){
  printf("\nDigite o ano:");
  scanf("%d",&ano);
    while(ano<1900 || ano>2100){
      printf("\nAno incorreto! Digite novamente:");
      scanf("%d",&ano);
    }
  return ano;
}
