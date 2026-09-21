#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "cartela.h"

void moverItem(int *vetor, int indice, int tamanho){
    int j = tamanho - 1;
    
    int aux       = vetor[indice];
    vetor[indice] = vetor[j];
    vetor[j]      = aux;
}

int sortearPedra(int *vetor, int tamanho){
    int i     = rand() % tamanho;
    int pedra = vetor[i];
    moverItem(vetor, i, tamanho);
    return pedra;
}

int main(void){

    srand(time(NULL));

    int tamanho = 75;
    int * cartela = gerarCartela(tamanho);

    while (tamanho > 0){
        sortearPedra(cartela, tamanho);
        tamanho--;
    }

    free(cartela);
}