#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;
#define tam 10

void cls(){
 system("clear");
}

void print_vector(int vetor[tam]){
 int cont;
  for(cont = 0; cont < tam; cont++){
 cout << vetor[cont] << " - ";
 }
 
}

void push_pile(int pilha[tam],int *topo){
 while(*topo != tam -1){
   *topo+=1; //Redefinindo o topo.
    pilha[*topo] = 5;
  }
  if(*topo == tam - 1){
   cout << "Pilha cheia.";
  }
}

int main(){
 cls();
 int pilha[tam];
 int topo = -1;  //Definindo o limite da pilha.
 int i;
  for(i=0;i<tam;i++){
 pilha[i] = 0;  
 }

 print_vector(pilha);
 push_pile(pilha, &topo);
 print_vector(pilha);
 

 return 0;
}