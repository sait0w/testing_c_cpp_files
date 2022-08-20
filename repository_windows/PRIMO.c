#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL,"");
 int n1, p1, p2 = 2, l1;
 
 printf("Insira um valor:");
 scanf("%d", &n1);
  l1 = n1 - 1;
 
 p1 = n1 % 2;
  while(p2<n1){
  if(p1!=0){
 while(p1 != 0 && p2 <= l1){
 p1 = n1 % p2;	
 p2++;	
 }
}else{
p2++;
}
  
}

 switch(p1){
 case 0:
  printf("O valor inserido não é primo.\n");
break;
 default:
  printf("O valor inserido é primo.\n");
break;
 	
}
 return 0;
}

