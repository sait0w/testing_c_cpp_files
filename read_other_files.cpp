#include <stdio.h>
#include <string.h>
#include <fstream>
#include <string>
#include <iostream>
#include <string.h>
using namespace std;

int main(){
 int curs;
 char contTexto[100];
 system("clear");

 FILE *file;
 file = fopen("README.md","r");
 int cont;
 if(file){
  while((curs = getc(file)) != EOF){
    printf("%c", curs);
    contTexto[cont] = curs;
    cont++;
  }
 }
 fclose(file);
 //Imprimindo conteúdo lido
 for(cont=0;cont<strlen(contTexto);cont++){
  printf("%c", contTexto[cont]);
 }  
 return 0;
}