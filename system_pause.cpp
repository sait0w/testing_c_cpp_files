#include <iostream>
using namespace std;

void return_num(int *pointer){
++*pointer;
}

int main(){
 int cont = 0;
 return_num(&cont);
 cout << cont;
 return 0;
}

