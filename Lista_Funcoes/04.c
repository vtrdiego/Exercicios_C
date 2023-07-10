#include <stdio.h>
int lerDia(int d);
int lerMes(int m);
int lerAno(int a);
int verificaBissexto(int a);
int valida(int di,int me,int an, int bi);
int dia,mes,ano,bissexto;

int main(void) {
  
  dia=lerDia(dia);
  mes=lerMes(mes);
  ano=lerAno(ano);

  printf("\n\nA data é: \n%d/%d/%d",dia,mes,ano);

//========================= Resposta se é bissexto =============================================
  
  ano=verificaBissexto(ano);

  printf("\n\nResposta: %d",ano);

//========================= Resposta da validação da data =======================================
  
 int v=valida(dia,mes,ano,bissexto);

  printf("\n\nResposta: %d",v);
  
  return 0;
}

//===============================================Função da data completa:======================================================
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

//=======================================Função para verificar se é bissexto============================================
int verificaBissexto(int a){
  if(ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0))
    return 1;
      else
    return 0;
}

//==========================================Função de validade da data:============================================
int valida(int di,int me,int an, int bi){

if((dia>30 && mes==04 || mes==06 || mes==9 || mes==11)||(bissexto==0 && mes==02 && dia>28)||(bissexto==1 && mes==02 && dia>29))
  return 0;
  else
  return 1;
}
