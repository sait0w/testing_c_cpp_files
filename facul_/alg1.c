/* Exercício 7 */

#include <stdio.h>
/* Função principal não recebe argumentos. */
int main(void)
{
    /* Declaração e inicialização das variáveis em ponto flutuante. */
    float notaAluno = 0.;
    float mediaAluno = 0.;

    printf("Primeira nota: ");
    scanf("%f", &notaAluno);
    mediaAluno += notaAluno;
    printf("Segunda nota: ");
    scanf("%f", &notaAluno);
    mediaAluno += notaAluno;
    printf("Terceira nota: ");
    scanf("%f", &notaAluno);
    mediaAluno += notaAluno;
    mediaAluno = mediaAluno / 3;

    printf("A média é: %.1f\n", mediaAluno);

    if(mediaAluno >= 5.0)
    {
        printf(" Aprovado \n");
    }
    else
    {
        printf(" Reprovado ");
    }

    return 0;
}
