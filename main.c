#include <stdio.h>

int main(void) {
 
  int fim,i,n,j,quant;
  printf("digite fim tabuada:");
  scanf("%d",&fim);
  printf("Escolha a quantidade por linha :");
   scanf("%d",&quant);
 
 
 for(n=1; n<=10 ;n+=quant){
   printf("\n--TABUADA  %d a %d --\n",n,n+quant-1);
 for (i=1;i<=fim;i++){
   
   
   for(j=0 ;j<quant ;j++){
   //printf("%02d x %02d = %02d\t",n,i,n*i);
   printf("%02d x %02d = %02d\t",n+j,i,(n+j)*i);
 
 }
 printf("\n");
 }
 } 

  return 0;
}