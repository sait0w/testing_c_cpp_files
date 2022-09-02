#include <fstream>
#include <iostream>
using namespace std;

string typewrd(){
 string wrd;
 cin >> wrd;
 return wrd;
}

int main(){

 //Criar objeto de arquivo
ofstream outputfile;  //'outputfile' é o objeto de arquivo

 //Abre o arquivo ou cria caso não exista
outputfile.open("wrd_bank.c", std::ios_base::app);  //"log.c" é o arquivo criado
 //Escreve algo no arquivo
outputfile << typewrd() << endl;
 //Para fechar 
outputfile.close();

return 0;
}