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
 int res = 0;

 do{
 cls();
 print_dash(26);
 cout<< " Aperte 'n' p/sair ";
 print_dash(23);
 cout << endl;
 print_jgforca();
 print_dash(72);
 cout << endl;
 space(20);
 cout << "Bem-Vindo ao Jogo da Forca™!! ˆˆ\n";
 space(30);
 cout << "INSTRUÇÕES:\n" << endl;
 cout << "-> Todos os acentos foram removidos para evitar confusões .\n";
 cout << "-> O número de tentativas é número de letras + 2.\n";
 cout << "-> A mensagem \x1b[32m'correto'\x1b[0m aparecerá se acertar letra.\n";   //Alterei a cor default do txt
 cout << "-> A mensagem \x1b[31m'incorreto'\x1b[0m aparecerá se errar letra.\n";
 print_menu2();
 cout << "-> Aperte '1' se deseja prosseguir.\n";
 cin >> iput;
  if(iput == 'n' || iput == 'N' || iput == 'no' || iput == 'No'){     //Comando 'e' p/sair do jogo
    cls();
    return 1;
   }
  }while(iput == '0');
 cls();
 cout << endl;
 do{
 print_forca();
 cout << endl << endl;

 
 cin >> res;
 cls();
 }while(res == 0);
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

