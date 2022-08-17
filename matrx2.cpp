#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main(){
 int i = 0, j = 0, l, mtrz[2][2], vctor[2];
 for(i=0;i<2;i++){
  for(j=0;j<2;j++){
    mtrz[i][j] = 99;
  }
 }
 printf("O valor de i e j são: %d, %d", i, j);
 scanf("%d %d", &i, &j);
  switch(i+j){
  case 0:
   scanf("%d", &mtrz[0][0]);
   break;
  case 2:
   scanf("%d", &mtrz[1][1]);
   break;
  default:
   scanf("%d", &mtrz[i][j]);
   break;
  }
 for(i=0;i<2;i++){
  for(j=0;j<2;j++){
    printf("Matriz[%d][%d]: %d\n", i, j, mtrz[i][j]);
  }  
 }
 for(i=0;i<3;i++){
  vctor[i] = 0;
 }
 for(i=0;i<3;i++){
  printf("vetor[%d] = %d\n", i, vctor[i]);
 }
 cout << i;
  return 0;
}