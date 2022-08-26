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

int main(){
 food *pt = new food;

 pt->banana = NULL;
 pt->cor = "Amarela";
 return 0;
}