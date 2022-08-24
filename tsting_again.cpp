#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main(){
 int h = 1;

 do{
 h = 3*h + 1;
 }while(h<10);
 cout << h;
 h = h/3;
 cout << "\n" << h;
 return 0;
}