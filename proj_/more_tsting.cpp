#include <fstream>
#include <iostream>
using namespace std;

int main(){
 int cont;
 //Indicar qual arquivo será lido
ifstream input("wrd_bank.txt");
 //String que recebe txt
string txtlido[500];

 //Passa txt do arquivo p/string
for(string line; getline(input, line);){
 txtlido[cont] += line; //Permite acrescentar 'linha por linha' ao conteúdo existente
 cont++; 
}

//Mostrar o conteúdo
cout << txtlido;
return 0;
}