#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#define nl 5

//Calling functions at the end, after main.
int clear();
void jgvelha();
void csfunction(int i, int j,int cvtr[3][3]);

int main(){
 clear();       
 int  i, j, mnselect;
 int cvtr[3][3];
 int v[11];
 int random = 144;
 setlocale(LC_ALL,"");
 
 do{
 std::cout << "Bem-vindo ao Juego da Velha BINÁRIO!!\n";
 std::cout << "As posições de cada compartimento no juego estão indicadas\n";
 std::cout << "a seguir:..\n";
 jgvelha();
 printf("Selecione o caractere '0' para bolinhas e '1' para cruzinhas.");
 std::cout << "\nAperte '1' se deseja prosseguir..\n";
 scanf("%d", &mnselect);
 clear();
 }while(mnselect!=1); //Set mnselect value to 1 in order to exit the menu.

 //Reset every value of cvtr[i][j] to random integer >= 0.
 for(i=0;i<3;i++){       //<---- Verify if this is right!!
  for(j=0;j<3;j++){
    cvtr[i][j] = random;
    random++; 
  }
  random = random % 17;
 }
 jgvelha();
 do{          //Beggining of "do_while" type of repetition.
 v[10] = 1;
 printf("\n Selecione _posição_ + _caractere escolhido_:");
 scanf("%d %d", &i, &j);        //in the matrix to the coordenates choosen.
 csfunction(i, j, cvtr);
  for(i=0;i<3;i++){     //"mnselect" = 1 i.e. vector begins in 1 instead of 0.
   for(j=0;j<3;j++){ 
   v[mnselect] = cvtr[i][j];        //<---- 'Error'.
   mnselect++; 
   }
 }
 mnselect = 1;
 if(v[1] == v[2] && v[3]){
   v[10] = 0;
 }
 if(v[1] == v[4] && v[7]){
   v[10] = 0;
 }
 if(v[1] == v[5] && v[9]){
   v[10] = 0;
 }
 if(v[4] == v[5] && v[6]){
   v[10] = 0;
 }
 if(v[7] == v[8] && v[9]){
   v[10] = 0;
 }
 if(v[3] == v[5] && v[7]){
   v[10] = 0;
 }
 if(v[2] == v[5] && v[8]){
   v[10] = 0;
 }
 if(v[3] == v[6] && v[9]){
   v[10] = 0;
 }
 }while(v[10] == 1);
 return 0;
}

void jgvelha(){          //UI of "jogo da velha".
 std::cout <<" 0,0 | 0,1 | 0,2 \n";
 std::cout <<"-----|-----|-----\n";
 std::cout <<" 1,0 | 1,1 | 1,2 \n";
 std::cout <<"-----|-----|-----\n";
 std::cout <<" 2,0 | 2,1 | 2,2\n";
}

int clear(){
 system("clear");
 return 1;
}

void csfunction(int i,int j,int cvtr[3][3]){   //"Choosing function" attributes a position 
 switch(i+j){                                  //in the matrix to the coordenates choosen.
 case 0:
  scanf("%d", &cvtr[0][0]);
  break;
 default:
  scanf("%d", &cvtr[i][j]);
  break;
 case 4:
  scanf("%d", &cvtr[2][2]);
 } 
}