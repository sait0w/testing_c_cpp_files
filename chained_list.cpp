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
 estrutura *chainpt;  //Ponteiro encadeado.

 estrutura *onel = new estrutura;  //Primeiro valor.       
 onel->num = 10;
 onel->num = NULL;
 chainpt = onel;
 estrutura *secondl = new estrutura;
 secondl->num = 20;
 secondl->next = NULL;

 chainpt->next = secondl;

 while(chainpt!=NULL){
  cout << "Value: " << chainpt->num << endl;
  chainpt = chainpt->next;
 }
  
 return 0;
}