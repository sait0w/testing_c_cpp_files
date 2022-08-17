#include <stdio.h>
#include <string.h>
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main(){
 int curs;

 FILE *file;
 file = fopen("texto.txt","r");
 if(file){
  while((curs = getc(file)) != EOF){
    printf("%c", curs);
  }
 }
 fclose(file);

 return 0;
}