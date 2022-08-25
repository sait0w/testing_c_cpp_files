#include <iostream>
#include <new>
#include <string>
#include <string.h>
#include <stdlib.h>
using namespace std; 

typedef struct pessoa{
    string nome;
    int rg;
}info;
 
void cls(){
 system("clear");
}

void addinit(pessoa *&pointer,int *size,string nome,int rg){
 if(*size == 0){
 pessoa *novalist = new pessoa[*size + 1];
 novalist[0].nome = nome;
 novalist[0].rg = rg;

 pointer = novalist;
 }else{

 pessoa *novalist = new pessoa[*size + 1];
 novalist[0].nome = nome;
 novalist[0].rg = rg;
 int cont;
 for(cont=0;cont<*size;cont++){
  novalist[cont + 1].nome = pointer[cont].nome;
  novalist[cont + 1].rg = pointer[cont].rg;
  pointer = novalist;
 } 
 ++*size;
 }
}

void addend(pessoa *&pointer,int *size,string nome,int rg){
 pessoa *novalist = new pessoa[*size + 1];
 int cont;
 for(cont=0;cont<*size;cont++){
  novalist[cont].nome = pointer[cont].nome;
  novalist[cont].rg = pointer[cont].rg;
 }
 novalist[*size].nome = nome;
 novalist[*size].rg = rg;

 pointer = novalist;
 ++*size;
}

void print_vector(pessoa *pointer,int *size){
 int cont;
  for(cont=0;cont<*size;cont++){
   cout << cont << "- " << pointer[cont].nome << "," << pointer[cont].rg << "\n";
  }
}

int main(){
 int size = 0, iput = 1;
 pessoa *pointer;

 while(iput < 10 && iput > 0){
  print_vector(pointer, &size);
        cout << "Tamanho Atual[" << size << "]\n";
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
  cout << "Digite um nome:";
  cin >> nome;
  cout << "Digite um rg:";
  cin >> rg;
  addinit(pointer, &size, nome, rg);
   break;
   case 2:
  cout << "Funcao escolhida: 2 - Insercao de um node no fim da lista \n";
  cout << "Digite um nome:";
  cin >> nome;
  cout << "Digite um rg:";
  cin >> rg;
  if(size == 0){
    addinit(pointer, &size, nome, rg);
  }else{
    addend(pointer, &size, nome, rg);
  }
 }
}
 return 0;
}