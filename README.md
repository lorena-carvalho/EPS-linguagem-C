# EPS Llinguagem C

## Descrição
Exercícios de programação estruturada em linguagem C

EP 1.0 - olá mundo!
```
#include <stdio.h>

int main(void) {
  printf("Olá mundo!\n");
  return 0;
}
```

EP 1.1 - estatísticas (menor, maior, média)
```
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
```

EP 1.3. - menu de operações
```
#include <stdio.h>

int main(void){
  int operacao, a, b, c;
  int x,y,z, menor, menor1=-180;
  int cont=0;
  
  scanf("%d", &operacao);

  while(operacao != 0){
    if(operacao == 1){
      scanf("%d %d", &a, &b);  
      x=a+b; 
      menor = x;
      printf("%d\n", x); 
    } 
    
    if(operacao == 2){
      scanf("%d %d %d", &a, &b, &c);  
      y=a+b+c; 
      menor = y;
      printf("%d\n",y); 
    }
    
    if(operacao == 3){
      scanf("%d %d", &a, &b);  
      z=a*b; 
      menor = z;
      printf("%d\n", z);   
    }
    cont = cont + 1;
    scanf("%d\n", &operacao);
  }

  if(operacao == 0){
    if(cont == 1)
      printf("%d",menor);
    else{
      if(x<y){
          if(y<z)
            printf("%d",x);
          else{
            z = menor1;
            printf("%d",menor1);
            } 
        }
        
      }
    }
      
  return 0;
}
```

EP 1.3 - conta números primos
```
#include <stdio.h>

int main(void) {
	int min, max, i, j, primo, cont=0;
	scanf("%i %i", &min, &max);
	
	for (i = min; i <= max; i++) {
		
    if (i == 0 || i == 1) {
			primo = 0;
      
		} else {
			primo = 1; 
			for(j = 2; j < i; j++) { 
				if (i % j == 0) {
					primo = 0; 
				}
			}
		}
		if (primo == 1) {
      cont++;    
		}
	}
  printf("%d\n",cont);
	
	return 0;
}
```