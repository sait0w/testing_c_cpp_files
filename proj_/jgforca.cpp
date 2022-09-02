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
 cls();
 setlocale(LC_ALL,"Portuguese");
 int iput = 0;

 do{
 print_dash(26);
 cout<< " Aperte 'esc' p/sair ";
 print_dash(23);
 cout << endl;
 print_jgforca();
 print_dash(72);
 cout << endl;
 space(20);
 cout << "Bem-Vindo ao Jogo da Forca™!! ˆˆ\n";
 space(30);
 cout << "INSTRUÇÕES:\n";
 cout << "-> Inicie o jogo digitando uma palavra p/ser decodificada.\n";
  }while(iput == 0);

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