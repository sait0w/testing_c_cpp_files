#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <string.h>

int main(){
int c;  //Cursor que percorre cada letra
char contxt[255];   //Criando uma string que armazena txt
int cont;

/*Arquivo a ser lido, 'FILE' aka tipo de variável p/arquivo*/
FILE *file; //Criando um ponteiro

//Abre arquivo 'README.md' no diretório escolhido 
file = fopen("README.md", "r");  //Comando 'r' p/ler 

/*Função que armazena char até EOF (end of file)*/
if(file){
 while((c = getc(file))!= EOF){
printf("%c", c); //Imprime na tela
 }
/*Vetor de char armazena os caracteres*/
contxt[cont] = c;
cont++;
 }
fclose(file);
return 0;
}