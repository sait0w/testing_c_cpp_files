#include <stdlib.h>
#include <stdio.h>

int main(){
 int lim, np, cont, sum = 0, aux = 0, rs;

 printf("Digite um valor limite:");
 scanf("%d", &lim);
  for(np=1;np<=lim;np++){
    aux = 0;
    cont = 1;
    for(cont=1;cont<=np;cont++){
     if(np%cont == 0){
      aux++; //aux == 1;
     }
     
    }
    if(aux == 2){
      sum+=np;
     }
  }
  printf("\nA soma é: %d", sum);

 return 0;
}