#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
#define tam 10

void init_row(int fila[tam]){
 int cont;

 for(cont=0;cont<tam;cont++){
  fila[cont] = 0;
 }
}

void print_row(int fila[tam],int tamanho){
 int cont;
  for(cont = 0; cont < tamanho; cont++){
 cout << fila[cont] << " - ";
 }
}

void build_fila(int *ft,int *ts){
 *ts = -1;
 *ft = 0;
}

void add_row(int fila[tam],int valor ,int *ts){
 *ts = *ts + 1;
 fila[*ts] = valor;
}

int main(){
 system("clear");
 int fila[tam], ft, ts, valor; //'ft' = frente, 'ts' = trás.
 

 init_row(fila);   //Inicializando o vetor com 'zero's'.
 build_fila(&ft, &ts);  //Inicializando os valores de 'ft' e 'ts'.
 add_row(fila, 5, &ts);  //'ts'= 1; fila[0] = 5;
 add_row(fila, 7, &ts);  //
 add_row(fila, 8, &ts);
 print_row(fila, 1 + (ts - ft));

 return 0;
}