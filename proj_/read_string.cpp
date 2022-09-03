#include <fstream>
#include <iostream>
#include <time.h>
#include <cstring>
#include <string>
using namespace std;

int main(){
 int cont = 0, cont1 = 0;
 int size = 0;
 //Indicar qual arquivo será lido
 ifstream input("bank.txt");
 //String que recebe txt
 string txtlido[200];

 //Passa txt do arquivo p/string
 for(string line; getline(input, line);){
 txtlido[cont] = line; //Permite acrescentar 'linha por linha' ao conteúdo existente
 cont++;
}

int random;
srand((unsigned)time(NULL));
random = rand()%55;
cout << random << endl;
cout << txtlido[random];
string obj = txtlido[random];
char* arr;
arr = &obj[0];
cout << arr[2];
 while(arr[cont1]!=' '){
  cont1++;
 }
 size = cont1;
 cout << size;
return 0;
}