#include <stdio.h>
#define tam 25
int main(void) {
  float vetorC[tam],vetorF[tam];

  for(int i=0;i<tam;i++){
    printf("Digite o valor em graus Celsius:");
    scanf("%f",&vetorC[i]);
  }
  printf("\nTemperaturas em Celsius:");
  for(int i=0;i<tam;i++){
    printf("\n%.2f",vetorC[i]);
  }
  printf("\n");
  printf("\nTemperaturas em Fahrenheit:");
  for(int i=0;i<tam;i++){
   vetorF[i]=vetorC[i]*1.8+32;
    printf("\n%.2f",vetorF[i]);
  }
  return 0;
}