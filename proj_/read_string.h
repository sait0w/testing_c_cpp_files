#include <fstream>
#include <iostream>
#include <time.h>
#include <cstring>
#include <string>
using namespace std;

string random_string(){
 int cont, cont1;
 int size;

 ifstream input("/Users/pedrosaito/Documents/code/cpp_test/proj_/bank.txt");
 string txtlido[200];

 for(string line; getline(input, line);){
 txtlido[cont] = line; //Permite acrescentar 'linha por linha' ao conteúdo existente
 cont++;
}

int random;
srand((unsigned)time(NULL));
random = rand()%55;
string obj = txtlido[random];
char* arr;
arr = &obj[0];
 while(arr[cont1]!=' '){
  cont1++;
 }
 return txtlido[random];
}