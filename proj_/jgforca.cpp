 #include <iostream>
 #include <string>
 #include <new>
 #include "ascii_art.h"
 #include <time.h>
 using namespace std;

void space(int size);
void print_dash(int size);
void cls();

 int main(){
 setlocale(LC_ALL,"Portuguese");
 char iput;

 do{
 cls();
 print_dash(26);
 cout<< " Aperte 'e' p/sair ";
 print_dash(23);
 cout << endl;
 print_jgforca();
 print_dash(72);
 cout << endl;
 space(20);
 cout << "Bem-Vindo ao Jogo da Forca™!! ˆˆ\n" << endl;
 space(30);
 cout << "INSTRUÇÕES:\n" << endl;
 cout << "-> Será disponibilizada uma dica sobre a palavra.\n";
 cout << "-> O número de tentativas é número de letras + 2.\n";
 cout << "-> A mensagem \x1b[32m'correto'\x1b[0m aparecerá se acertar letra.\n";
 cout << "-> A mensagem \x1b[31m'incorreto'\x1b[0m aparecerá se errar letra.\n" << endl;
 print_menu2();
 cout << "-> Aperte '1' se deseja prosseguir.\n";
 cin >> iput;
  if(iput == 'e'){
    cls();
    return 1;
   }
  }while(iput == '0');
 cls();



 return 0;
 }

void space(int size){
 int cont;
  for(cont=0;cont<=size;cont++){
   cout << " ";
  }
}

void print_dash(int size){
 int cont;

 cout << "X";
  for(cont=0;cont<=size;cont++){
   cout << "-";
  }
  cout << "X";
}

void cls(){
 system("clear");
}