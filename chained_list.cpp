#include <iostream>
#include <new>
#include <string>
#include <string.h>
#include <stdlib.h>
using namespace std; 

struct estrutura{
 int num;
 struct estrutura *next;
};

int main(){
 estrutura algo = {13, NULL};
 estrutura *chainpt;  //Ponteiro encadeado.
 estrutura *onel = new estrutura;  //Primeiro valor.       
 
 
 return 0;
}