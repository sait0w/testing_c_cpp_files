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

void print_vector(pessoa *identity,int size){
 int cont;
  for(cont=0;cont<size;cont++){
   cout << cont << "- " << identity[cont].nome << "," << identity[cont].rg << "\n";
  }
}

int main(){
 int size;
 struct info;
 pessoa *identity = new pessoa[2];

 identity[0].nome = "Pedro";
 identity[0].rg = 31580177;
 identity[1].nome = "Joao";
 identity[1].rg = 32112621;
 print_vector(identity, 2);

 return 0;
}