#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define pi 3,14

int main(){
 setlocale(LC_ALL,"");
 int a;
 double num1, num2, pt; 
 
 do{
 printf("Bem-vindo � culculadora!! <3");
 printf("\n--MENU--");
 printf("\nDigite o n�mero referente � sua escolha:");
 printf("\n|   1. Soma   |   2.Subtra��o   |   3.Multiplica��o   |   4.Divis�o   |");
 printf("\n|   5. �rea do C�rculo   |   6. Potencia��o   |");
 printf("\nEscolha:");
 scanf("%d", &a);
 }while(a<1||a>6);
system("cls");

 switch(a){
  case 1:
 printf("\nDigite o primeiro valor:");
 scanf("%lf", &num1);
 printf("\nDigite o segundo valor:");
 scanf("%lf", &num2);
 printf("\nA soma �: %lf\n", num1 + num2);
 break;
  case 2:
 printf("\nDigite o primeiro valor:");
 scanf("%lf", &num1);
 printf("\nDigite o segundo valor:");
 scanf("%lf", &num2);
 printf("\nA subtra��o �: %lf\n", num1 - num2);
 break;
   case 3:
 printf("\nDigite o primeiro valor:");
 scanf("%lf", &num1);
 printf("\nDigite o segundo valor:");
 scanf("%lf", &num2);
 printf("\nA multiplica��o �: %lf\n", num1 * num2);
 break;
   case 4:
 printf("\nDigite o primeiro valor:");
 scanf("%lf", &num1);
 printf("\nDigite o segundo valor:");
 scanf("%lf", &num2);
 printf("A divis�o �: %lf\n", num1 / num2);
 break;
   case 5:
 printf("\nDigite o valor do raio:");
 scanf("%lf", &num1);
 
 if(num1<=0){
 printf("\nValor inserido inv�lido.");	
 }else{
 printf("O valor da �rea do c�rculo �: %lf\n", 2*pi*num1);
 }
 break;
   case 6:
 printf("\nDigite o valor:");
 scanf("%lf", &num1);
 printf("\nDigite o valor da pot�ncia:");
 scanf("%lf", &num2);
 pt = pow(num1, num2);
 printf("\nO resultado da potencia��o �: %lf\n", pt);
 break;
}
 
 return 0;
}
