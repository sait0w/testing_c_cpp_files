#include <iostream>
#include <new>
#include <string>
#include <string.h>
#include <stdlib.h>
using namespace std; 

typedef struct pessoa{
 int rg;
 string nome;
 struct pessoa *next;
}info;

void cls(){
 system("clear");
}

int returnsize(pessoa *pointer){
 int size = 0;
 
 pessoa *c = pointer;
 while(c!=NULL){
  c = c->next;
  size++;
 }
 return size;
}

int main(){
 struct info;
 int size, iput = 1;
 pessoa *pointer;  //Início da lista encadeada.
 pessoa *onel = new pessoa;
 onel->nome = "Pedro";
 onel->rg = 1;
 onel->next = NULL;
 pointer = onel;

 pessoa *secondl = new pessoa;
 secondl->nome = "Joao";;
 secondl->rg = 321;
 secondl->next = NULL;
 onel->next = secondl;
 while(iput < 9){

        cout << "Tamanho Atual[" << returnsize(pointer) << "]\n";
        cout << "Operacoes \n";
        cout << "1 - Insercao de um node no inicio da lista \n";
        cout << "2 - Insercao de um node no fim da lista \n";
        cout << "3 - Insercao de um node na posicao N \n";
        cout << "4 - Retirar um node do inicio da lista \n";
        cout << "5 - Retirar um node no fim da lista \n";
        cout << "6 - Retirar um node na posicao N \n";
        cout << "7 - Procurar um node com o campo RG \n";
        cout << "8 - Imprimir a Lista. \n";
        cout << "9 - Sair do sistema. \n";
        cout << "\nEscolha um numero e pressione ENTER: \n";
  cin >> iput;
  cls();
  string nome;
  int rg; 
  switch(iput){
    case 1:
     cout << "Funcao escolhida: 1 - Insercao de um node no inicio da lista \n";
    break;
    case 2:
    break;
  }
 }
 return 0;
}