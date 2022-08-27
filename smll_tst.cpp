#include <iostream>
#include <new>
#include <string>
#include <string.h>
#include <stdlib.h>
using namespace std; 

struct food{
 string cor;
 struct food *banana;  //Só funciona com ponteiro?
};

int main(){   //Qual a diferença entre 'food *pointer = new food;' & 'food *pointer;'.
 food *pt = new food;
 food *pointer;

 pt->banana = NULL;
 pt->cor = "Amarela";
 pointer->banana = NULL;
 pointer->cor = "Amarela";
 return 0;
}