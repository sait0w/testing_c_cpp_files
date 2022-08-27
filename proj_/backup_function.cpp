#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <stdbool.h>
using namespace std;

void trerow(bool bul,int v[9]){
 if(v[1] == v[2] && v[3]){
   bul = 1;
 }
 if(v[1] == v[4] && v[7]){
   bul = 1;
 }
 if(v[1] == v[5] && v[9]){
   bul = 1;
 }
 if(v[4] == v[5] && v[6]){
   bul = 1;
 }
 if(v[7] == v[8] && v[9]){
   bul = 1;
 }
 if(v[3] == v[5] && v[7]){
   bul = 1;
 }
 if(v[2] == v[5] && v[8]){
   bul = 1;
 }
 if(v[3] == v[6] && v[9]){
   bul = 1;
 }
}

/*if(i>=1){      //Three possible cases, (0,0),(1,1)&(2,2).
   if(i>1){ 
    scanf("%d", &cvtr[2][2]);
   }else{scanf("%d", &cvtr[1][1]);} 
  }else{ 
  scanf("%d", &cvtr[0][0]);
  }*/ 

/*Inserir essa função no final, antes do 'while'.
int mtrztovctor(){
 int i, j, vctor[8], k, cvtr[2][2];
  for(i=0;i<3;i++){
   for(j=0;j<3;j++){
    vctor[k] = cvtr[i][j];
   }
 }
}*/

/*if(i==j){      //Selecting positions in matriz(memory) in which 'i' = 'j'.
 csfunction(i, j, cvtr);
 }
 if(i>j){       //"" 'i' > 'j'.
 csfunction(i, j, cvtr);
 }else{         //"" 'i' < 'j'.
 csfunction(i, j, cvtr);
 }*/