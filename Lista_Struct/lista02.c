#include <stdio.h>
#include <string.h>

typedef struct{
int x;
int y;
}quadrado;

int main(void) {
  quadrado quad;
  int a1=0,a2=0,b1=0,b2=0,c1=0,c2=0;

  printf("Digite o ponto X (coluna) do quadrado:");
  scanf("%d",&quad.x);

  printf("Digite o ponto Y (linha) do quadrado:");
  scanf("%d",&quad.y);

  printf("\nDigite o ponto X(coluna) e Y(linha) de Valor 1");
  printf("\nPonto X:");
  scanf("%d",&a2);
  printf("Ponto Y:");
  scanf("%d",&a1);

  printf("\nDigite o ponto X(coluna) e Y(linha) de Valor 2");
  printf("\nPonto X:");
  scanf("%d",&b2);
  printf("Ponto Y:");
  scanf("%d",&b1);

  printf("\nDigite o ponto X(coluna) e Y(linha) de Valor 3");
  printf("\nPonto X:");
  scanf("%d",&c2);
  printf("Ponto Y:");
  scanf("%d",&c1);

  int c=quad.x,l=quad.y;
  char matriz[l][c];

  for(int i=0;i<l;i++){
    for(int j=0;j<c;j++){
      if(i==0 || i==l-1){
      matriz[i][j]='*';
        }
      else if(j==0 || j==c-1){
        matriz[i][j]='*';
      }else{
        matriz[i][j]=' ';
      }
      if(i==a1 && j==a2){
          matriz[a1][a2]='1';
          a1=-1;
        }
      if(i==b1 && j==b2){
          matriz[b1][b2]='2';
          b1=-1;
        }
      if(i==c1 && j==c2){
          matriz[c1][c2]='3';
          c1=-1;
        }
    }
  }
  
  printf("\n\n");
  for(int i=0;i<l;i++){
    for(int j=0;j<c;j++){
      printf("%c",matriz[i][j]);
    }
    printf("\n");
  }

  if(a1!=-1){
    printf("\nValor 1 está fora do quadrado!");
  }
  if(b1!=-1){
    printf("\nValor 2 está fora do quadrado!");
  }
  if(c1!=-1){
    printf("\nValor 3 está fora do quadrado!");
  }

  return 0;
}