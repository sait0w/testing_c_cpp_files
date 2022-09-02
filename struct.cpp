#include <iostream>
#include <string>
#include <string.h>
using namespace std;

typedef struct data{    //This is a sub-struct within the 'struct Aluno'
 int dia, mes, ano;   
}info;

struct Aluno{
 int id;
 info nascimento;
};

string return_date(){
 string date;
 function.nascimento.ano = 2004;
 function.nascimento.mes = 10;
 function.nascimento.dia = 30;
 function.id = 123;
 
 
 return date;
}

int main(){
 struct Aluno aluno1;
 Aluno function;

 cout << "O aluno Pedro Saito nasceu em: " << print_date(function);

 return 0;
}