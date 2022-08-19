#include <stdio.h>
#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#define TAM 10
 
using namespace std; //para utilizar cout
 
void imprime_vetor(int vetor[TAM]){
 
    //Auxiliar contador
    int cont;
 
     //Imprime o vetor
    for(cont = 0; cont < TAM; cont++){
        cout << vetor[cont] << " - ";
    }
 
}
 
int busca_simples(int vetor[TAM], int valorProcurado, int *posicaoEncontrada,int i = 20){
 
    //Auxiliar contador
    int cont;
 
    //Verifica se o valor foi encontrado
    bool valorFoiEncontrado;
 
    //Percorre a lista em busca do valor
    for(cont = 0; cont < TAM; cont++){
        if(vetor[cont] == valorProcurado){
            valorFoiEncontrado = true;
            *posicaoEncontrada = cont;
        }
    }
 
    if(valorFoiEncontrado){
        return 1;
    }else{
        return -1;
    }

}
 
int main(){
 
    int vetor[TAM] = {1,23,44,56,63,72,84,90,98};
    int valorProcurado;
    int posicao, posicaoEncontrada;
    int i;
 
    //Auxiliar contador
    int cont;
 
    imprime_vetor(vetor);
 
 
    printf("Qual numero deseja encontrar?");
    scanf("%d", &valorProcurado);
 
    if(busca_simples(vetor, valorProcurado, &posicaoEncontrada, i) == 1){
        cout << "O valor foi encontrado na posicao:\n" << posicaoEncontrada;
    }else{
        cout << "Valor nao encontrado\n";
    }
    for(i=1;i<TAM;i++){
     printf("Vetor[%d] = %d\n", i, vetor[i]);
    }
 
    return 0;
 
}