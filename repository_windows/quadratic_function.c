#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#include <math.h>
#define pi 3,142
#define fi (sqrt(5)+1)/2
#define e 2,718

int main(){
 setlocale(LC_ALL,"");
 double a, b, c, Dlt, x1, x2, x0;
 
 printf("Insira uma os coeficientes de uma fun��o polinomial quadr�trica ax^2 + bx + c = y");
 printf("\nDigite o valor de 'a':");
 scanf("%lf", &a);
 printf("\nDigite o valor de 'b':");
 scanf("%lf", &b);
 printf("\nInsira o valor de 'c':");
 scanf("%lf", &c);
 
 Dlt = pow(b,2) - 4 * a * c;
 
 printf("\nO valor de Delta �: %lf", Dlt);
 
 if(Dlt<0){
 printf("\nA fun��o n�o possui solu��es reais.\n");	
 }else if(Dlt==0){
 	
 x0 = (-1*b)/2*a;
 printf("\nA raiz real da fun��o quadr�tica �: %lf\n", x0);
 }else{
 
 
 x1 = (-1*b + sqrt(Dlt))/2*a;
 x2 = (-1*b - sqrt(Dlt))/2*a;
 
 printf("\nAs ra�zes ra�zes reais da fun��o quadr�tica s�o: (%lf) (%lf)\n", x1, x2); 
 
}
 return 0;
} 
