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