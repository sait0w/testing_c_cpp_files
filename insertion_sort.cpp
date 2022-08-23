#include <stdlib.h>
#include <iostream>
#include <string>
#define tam 10
using namespace std;

void print_vector(int v[]){
 int cont;
  for(cont=0;cont<tam;cont++){
   cout << " |" << v[cont] << "| "; 
  }
  cout << "\n";
}

void insertion_sort(int v[tam]){
 int i, j, at;  
 for(i=1;i<tam;i++){
      at = v[i]; //Elemento em análise.
      j = i - 1; //Elemento anterior ao analisado.
     while((j>=0) && (at<j)){
      v[j+1] = v[j];
      j = j - 1;
     }
    v[j+1] = at;
  }
}

int main(){
 int v[tam] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
 insertion_sort(v);
 print_vector(v);
 return 0;
}
