#include <stdio.h>
#define tam 30
int main(void) {
  int vetorA[tam];
  float vetorB[tam],divisor;

  for(int i=0;i<30;i++){
  printf("Digite o valor de A:");
  scanf("%d",&vetorA[i]);
  }
  printf("\nDigite o número divisor:");
  scanf("%f",&divisor);

  for(int i=0;i<30;i++){
    vetorB[i]=vetorA[i]/divisor;
    printf("\n%.0f ",vetorB[i]);
  }


  
  return 0;
}