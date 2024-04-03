#include <stdio.h>

int main(void) {
  float av1, av2, av3, media = 0;  
  printf("informe a nota da av1: ");
  scanf("%f", &av1);  
  printf("informe a nota da av2: ");            
  scanf("%f", &av2);
  media = (av1+av2)/2;
  printf("media %.2f", media);
  if (media >= 7) 
    printf("\naprovado");
  else
    printf("\nreprovado");
  return 0;
}
