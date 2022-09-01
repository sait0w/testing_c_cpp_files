#include <stdlib.h>
#include <stdio.h>
#define size 3

void print_vctor(int v[]){
 int cont;
 for(cont=0;cont<size;cont++){
  printf("vetor[%d] = %d\n", cont, v[cont]);
 }
}

int main(){
 int v[3] = {1, 2, 3}; 

 print_vctor(v);
 return 1;
}