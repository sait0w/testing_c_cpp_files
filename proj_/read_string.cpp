#include <fstream>
#include <iostream>
#include <time.h>
using namespace std;

int main(){
 int cont = 0;
 //Indicar qual arquivo será lido
ifstream input("bank.md");
 //String que recebe txt
string txtlido[500];

 //Passa txt do arquivo p/string
 for(string line; getline(input, line);){
 txtlido[cont] += line; //Permite acrescentar 'linha por linha' ao conteúdo existente
 cont++;
}

//Mostrar o conteúdo
 for(cont=0;cont<=30;cont++){
  cout << txtlido[cont] << endl;
 }
return 0;
}