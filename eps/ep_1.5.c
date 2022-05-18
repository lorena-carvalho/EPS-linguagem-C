#include <stdio.h>
 
int main(){
  int n,i,produto;
 
  scanf("%d",&n);
  produto = 1;
  i = 1;
  
  while(produto < n){
    produto = i*(i+1)*(i+2);
    i = i + 1;
  }
  
  i = i - 1;
  if(produto == n)
    printf("SIM\n");
  else
    printf("NAO\n");
 
  return 0;
}