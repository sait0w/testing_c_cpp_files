#include <fstream>
#include <iostream>
using namespace std;

int main(){
 string wrd;

 cin >> wrd;
 //Criar objeto de arquivo
ofstream outputfile;  //'outputfile' é o objeto de arquivo

 //Abre o arquivo ou cria caso não exista
outputfile.open("wrd_bank.txt", std::ios_base::app);  //"log.c" é o arquivo criado
 //Escreve algo no arquivo
outputfile << wrd << endl;
 //Para fechar 
outputfile.close();

return 0;
}