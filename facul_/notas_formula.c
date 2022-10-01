/*

Programas: entrada_saida.c ;
Autor: Pedro Henrique Honorio Saito ;
Data : 29/09/2022 ;
Descrição: Resolução da lista de exercícios do 5 ao 9 ;

*/

/* Exercício 5 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> /* Biblioteca "locale.h" permite a impressão de caracteres especiais. */


/* Função principal não recebe argumentos. */
int main(void)
{
    /* Declaração e inicialização das variáveis em ponto flutuante. */
    float tst1 = 0., tst2 = 0., tst3 = 0.; /* "teste 1", "teste 2" e "teste 3".*/
    float prova = 0., ntfinal = 0.;

    /* Configuração do idioma em português.*/
    setlocale(LC_ALL, "Portuguese");

    /* Comando "do while" empregado para tratamento de erro. */
    do
    {
        printf("Insira o valor referente ao primeiro teste: ");
        scanf("%f", &tst1); /* Inserção de valor na variável "tst1". */
        printf("Insira o valor referente ao segundo teste: ");
        scanf("%f", &tst2); /* Inserção de valor em "tst2". */
        printf("Insira o valor referente ao terceiro teste: ");
        scanf("%f", &tst3); /* Inserção de valor em "tst3". */
        printf("Insira o valor correspondente a prova: ");
        scanf("%f", &prova);

        /* Condicional para valores incorretos. */
        if ((tst1 > 0) || (tst2 > 0) || (tst3 > 0) || (prova > 0))
        {
            printf("Valores incorretos.. Tente novamente, aperte 'ENTER'.");
        }
    } while ((tst1 > 0) || (tst2 > 0) || (tst3 > 0) || (prova > 0));

    /* Cáculo da nota final pela forma indicada. */
    ntfinal = ((0.8 * prova) + 0.2 * ((tst1 + tst2 + tst3) / 3));

    /* Impressão dos resutlados de saída: */
    printf("Prova: %.1f\n", prova);
    printf("Teste 1: %.1f\n", tst1);
    printf("Teste 2: %.1f\n", tst2);
    printf("Teste 3: %.1f\n", tst3);
    printf("Nota final: %.1f\n", ntfinal);

    return 0;
}
