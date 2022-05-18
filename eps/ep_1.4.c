#include <stdio.h>
 
int main(){
  int n,i,num,ant,crescente = 1;
  
  scanf("%d",&n);
 
  scanf("%d",&ant);
  i = 2;
  while(i <= n && crescente){
    scanf("%d",&num);
    if(num <= ant)
      crescente = 0;
    ant = num;
    i = i + 1;
  }
  if(crescente)
    printf("SIM\n");
  else
    printf("NAO\n");
 
  return 0;
}