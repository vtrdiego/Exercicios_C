#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define p 5
#define r 7

struct jogador{
	char nome[500]; 
	int idade;
	char posicao[50];   
  int numero_camisa;  
};

struct timeFutsal{
  char nome[500];
  struct jogador principal[p];   
  struct jogador reserva[r];   
};

typedef struct timeFutsal time;

void jogadores(time nomes);
void jogadores_camisa(time nomes, int camisa);
void jogadores_posicao(time nomes, char *po);

int main(void) {
  time time;
  int camisa=0;
  char posi[20];

  printf("\nDigite o nome do time:");
  gets(time.nome);

  for(int i=0;i<p;i++){
    printf("\nDigite o nome do jogador do time principal:");
    gets(time.principal[i].nome);

    printf("Digite a idade do jogador do time principal:");
    scanf("%d",&time.principal[i].idade);
    int c; while ((c = getchar()) != '\n' && c != EOF);

    printf("Digite a posição do jogador do time principal:");
    gets(time.principal[i].posicao);

    printf("Digite a camisa do jogador do time principal:");
    scanf("%d",&time.principal[i].numero_camisa);
    int b; while ((b = getchar()) != '\n' && b != EOF);
  }
  for(int i=0;i<r;i++){
    printf("\nDigite o nome do jogador do time reserva:");
    gets(time.reserva[i].nome);

    printf("Digite a idade do jogador do time reserva:");
    scanf("%d",&time.reserva[i].idade);
    int c; while ((c = getchar()) != '\n' && c != EOF);

    printf("Digite a posição do jogador do time reserva:");
    gets(time.reserva[i].posicao);

    printf("Digite a camisa do jogador do time reserva:");
    scanf("%d",&time.reserva[i].numero_camisa);
    int b; while ((b = getchar()) != '\n' && b != EOF);
  }

  printf("\n\n");
  printf("                    Time do %s:",time.nome);

  jogadores(time);

  printf("\n\nDigite o número da camisa:");
  scanf("%d",&camisa);
  int c; while ((c = getchar()) != '\n' && c != EOF);

  jogadores_camisa(time,camisa);

  printf("\n\nDigite o nome da posição:");
  gets(posi);

  jogadores_posicao(time,posi);
  
  return 0;
}

void jogadores(time nomes){
  printf("\n\nTIME PRINCIPAL:");
  for(int i=0;i<p;i++){
    printf("\n%s",nomes.principal[i].nome);
  }
  printf("\n\nTIME RESERVA:");
  for(int i=0;i<r;i++){
    printf("\n%s",nomes.reserva[i].nome);
  }
}

void jogadores_camisa(time nomes, int camisa){
  int cont=0;

  printf("\nJOGADORES COM A CAMISA %d:\n",camisa);
  for(int i=0;i<p;i++){
    if(camisa==nomes.principal[i].numero_camisa){
      printf("%s",nomes.principal[i].nome);
      cont++;
    }
  }
  for(int i=0;i<r;i++){
    if(camisa==nomes.reserva[i].numero_camisa){
      printf("\n%s",nomes.reserva[i].nome);
      cont++;
    }
  }
  if(cont==0){
    printf("\nNão há jogadores com essa camisa!");
  }
}

void jogadores_posicao(time nomes, char *po){
  int cont=0;
  char *ptr;
  printf("\nJOGADORES SUBSTITUTOS DA POSIÇÃO:");
  for(int i=0;i<r;i++){
    cont=0;
    if(strlen(po)==strlen(nomes.reserva[i].posicao)){
      ptr=nomes.reserva[i].posicao;
      for(int j=0;j<strlen(po);j++){
        if(po[j]==ptr[j]){
          cont++;
        }
      }
    }
    if(cont==strlen(po)){
      printf("\n%s - camisa %d",nomes.reserva[i].nome,nomes.reserva[i].numero_camisa);
    }
  }
  if(cont==0){
    printf("\nNão há jogadores nessa posição!");
  }
}