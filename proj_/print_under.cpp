#include <fstream>
#include <iostream>
#include <time.h>
#include <cstring>
#include <string>
using namespace std;
     
void print_under(char v[20],int *tam){
 int cont = 0;
 int cont1 = 0;

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
 char *arr;
 arr = &obj[0];
 while(arr[cont1]!=' '){
  cont1++;
 }
 cout << txtlido[random] << endl;
 cont = 0;

 /* ---------- End of First Function ---------- */

 for(cont=0;cont<cont1;cont++){
   v[cont] = '_';
  }

 /* ---------- Beginning of Second Function ---------- */

 for(cont=0;cont<cont1;cont++){
  cout << v[cont] << " ";
 }
 cout << endl;
 for(cont=0;cont<cont1;cont++){
  cout << cont << " ";
 }

 /* ---------- End of Second Function ---------- */

 *tam = cont1;
}

/* ---------- Put_Value Fucntion ---------- */

string put_value(int *tam){
 char *resposta;
 int cont = 0;
 int cont1 = 0;

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
 resposta = &obj[0];
 while(resposta[cont1]!=' '){
  cont1++;
 }

 //Ponteiro tamanho recebe o 'cont1'
 *tam = cont1;   

return obj;
}

void print_letters(char v[20],int tam){
 int cont;
 for(cont=0;cont<tam;cont++){
  cout << v[cont] << " ";
 }
 cout << endl;
 for(cont=0;cont<tam;cont++){
  cout << cont << " ";
 }
}

void verify(char v[20], char *resposta){
 
}