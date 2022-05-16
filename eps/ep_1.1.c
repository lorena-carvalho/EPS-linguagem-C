#include <stdio.h>

int  main(void){
  int n,i;
  float numero, soma=0, menor = 999, maior = -2, media;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%float", &numero);
    soma = soma + numero;

    if (numero > maior){
      maior = numero;
    }  
    if (numero < menor){
      menor = numero;
    }   
  }

  media = soma/n;

  printf("Menor: %.2f\n",menor);
  printf("Maior: %.2f\n",maior);
  printf("Média: %.2f\n",media);
  
  return 0;
}
