#include <fstream>
#include <iostream>
using namespace std;

int main(){
 //Criar objeto de arquivo
ofstream outputfile;  //'outputfile' é o objeto de arquivo
string wrd;
cin >> wrd;
 //Abre o arquivo ou cria caso não exista
outputfile.open("/Users/pedrosaito/Documents/code/cpp_test/log.c", std::ios_base::app);  //"log.c" é o arquivo criado
 //Escreve algo no arquivo
outputfile << wrd << " " << endl;
 //Para fechar 
outputfile.close();

return 0;
}