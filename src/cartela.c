#include <stdio.h>
#include <stdlib.h>

int* gerarCartela(int tamanho){
    int *cartela = (int *) malloc(tamanho * sizeof(int));

    if (cartela == NULL){
        printf("Erro: Memoria Insuficiente!\n");
        exit(1);
    }

    for (int i = 0; i < tamanho; i++){
        cartela[i] = i + 1;
    }

    return cartela;
}