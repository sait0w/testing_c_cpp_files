#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <string>

int main(){
 setlocale(LC_ALL,"");
 int n1, n2, n3;
 std::string wrd;

 printf("Posso misturar C/C++?\n");
 std::cout << "Eu acho que sim.\n";
 printf("Vamos testar:");
 std::cin >> wrd;
 printf("Insira um valor:");
 scanf("%d", &n1);
 
 if(n1==1){
  std::cout << "\nOque está acontecendo...\n";
  
}else{	
  printf("\nAgr sai daqui..\n");	
}
 
 system("pause");
}

