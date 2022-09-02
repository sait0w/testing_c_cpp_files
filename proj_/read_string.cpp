#include <fstream>
#include <iostream>
#include <time.h>
using namespace std;

int main(){
 int cont = 0;
 //Indicar qual arquivo será lido
ifstream input("bank.txt");
 //String que recebe txt
string txtlido;

 //Passa txt do arquivo p/string
 for(string line; getline(input, line);){
 txtlido += line; //Permite acrescentar 'linha por linha' ao conteúdo existente
}

cout << txtlido;

//Mostrar o conteúdo
cout << txtlido;
return 0;
}