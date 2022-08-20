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

void push_pile(int pilha[tam],int *topo, int random){
 if(*topo == tam - 1){
  cout << "Pilha cheia";
 }else{
  *topo+=1;
  pilha[*topo] = random;
 
 }
}

void pile_pop(int pilha[tam], int *topo){
 if(*topo == -1){
  cout << "A pilha está vazia.";
 }else{
  cout << "Valor removido: " << pilha[*topo];
  *topo-=1;
 }
}

int main(){
 cls();
 int pilha[tam];
 int topo = -1;  //Definindo o limite da pilha.
 int random, i;
  for(i=0;i<tam;i++){
 pilha[i] = 0;  
 }
 scanf("%d", &random);

 print_vector(pilha);
 push_pile(pilha, &topo, random);
 push_pile(pilha, &topo, random);
 push_pile(pilha, &topo, random);
 push_pile(pilha, &topo, random);
 push_pile(pilha, &topo, random);
 push_pile(pilha, &topo, random);
 push_pile(pilha, &topo, random);
 push_pile(pilha, &topo, random);
 push_pile(pilha, &topo, random);
 push_pile(pilha, &topo, random);
 push_pile(pilha, &topo, random);
 print_vector(pilha);
 pile_pop(pilha, &topo);
 

 return 0;
}