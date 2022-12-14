 #include <iostream>
 #include <string>
 #include <string.h>
 #include <fstream>
 #include <new>
 #include "ascii_art.h"
 #include "read_string.h"
 #include "print_under.cpp"
 using namespace std;

void pause();
void space(int size);
void print_dash(int size);
void cls();
void print_charray(char v[20],int tam);

int main(){
 setlocale(LC_ALL,"Portuguese");
 char v[20];
 string iput;
 int aux = 0; 
 int posicao;
 int tam = 1;
 char lt;
 

 do{
 cls();
 print_dash(26);
 cout<< " Aperte 'n' p/sair ";
 print_dash(23);
 cout << endl;
 print_jgforca();
 print_dash(72);
 cout << endl;

 /* MENU | SAUDACÕES | INSTRUÇÕES */

 space(20);
 cout << "Bem-Vindo ao Jogo da Forca™!! ˆˆ\n";
 space(30);
 cout << "INSTRUÇÕES:\n" << endl;
 cout << "-> Todos os acentos e letras maiúsculas foram removidos para evitar confusões .\n";
 cout << "-> O número de tentativas é número de letras + 2.\n";
 cout << "-> A mensagem \x1b[32m'correto'\x1b[0m aparecerá se acertar letra.\n";   //Alterei a cor default do txt
 cout << "-> A mensagem \x1b[31m'incorreto'\x1b[0m aparecerá se errar letra.\n";
 print_menu2();
 cout << "-> Aperte '1' se deseja prosseguir.\n";
 cin >> iput;
  if(iput == "n" || iput == "N" || iput == "no" || iput == "No"){     //Comando 'e' p/sair do jogo
    cls();
    return 1;
   }
  }while(iput == "0");
 cls();
 pause();



 /* Inseri os valores na função Int */

 string temp = put_value(&tam);
 char *resposta = &temp[0];
 
 /* Initialize value of FALSE char array */

 int alt = 0;
 for(alt=0;alt<tam;alt++){
  v[alt] = '_';
 } 

 /* Inicia-se a repetição */
 int gont = tam + (tam-3);
 while(aux < tam && gont > 0){
 print_forca();   //Imprime arte do homem da forca
 cout << endl;
 cout << "Selecione uma posição e o caractere, respectivamente:" << endl;
 print_letters(v, tam);
 cout << endl;
 cout << temp;
 cout << "->";
 cin >> posicao;
 cout << "->";
 cin >> lt; 
 int cont3 = 0;

 aux += verify(lt, resposta, posicao);
 right_wrong(lt, resposta, posicao);
 --gont;
 cout << "\nNúmero de tentativas restantes: " << gont;
 for(cont3=0;cont3<tam;cont3++){
   if(posicao == cont3 && lt == resposta[posicao]){
    v[cont3] = lt;
   }
  }

 pause();
 pause();
 cls();
 }
 if(aux == tam){
 cout << endl << "Parabéns!! Você completou a palavra: ";
 print_charray(v, tam);
 cout << endl;
 }
 cout << "Para aperfeiçoar o banco de palavras que tal adicionar uma própria: ";
 write_bank();

 pause();
 
 return 0;
}

/* X------------ End of Int Main() ------------X */

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

void pause(){
 cin.sync();
 cin.get();
}

void print_charray(char v[20], int tam){
 int cont = 0;
 for(cont=0;cont<tam;cont++){
  cout << v[cont];
 }
}