#include "vetor.h"

int main () {
    int tamanho;
    t_vetor meu_vetor;
    printf ("digite o tamanho do vetor: ");
    scanf ("%d", &tamanho);
    inicializa_vetor(&meu_vetor, tamanho);
    exibe_vetor (&meu_vetor);
    int i;
    for (i=1; i<=100; i++) {
        insere_valor(i, &meu_vetor);
        printf ("tamanho: %d, ocupacao: %d\n", meu_vetor.capacidade, meu_vetor.ocupacao);
        exibe_vetor (&meu_vetor);
    }
    while (remove_valor(&i, &meu_vetor)) {
        printf ("%d saiu\n", i);
        printf ("tamanho: %d, ocupacao: %d\n", meu_vetor.capacidade, meu_vetor.ocupacao);
        exibe_vetor(&meu_vetor);
    }
    return 0;
}

