// Copyright 2019 Clara Resende

#include <stdio.h>
#include <string.h>
#include "romano.hpp"

int main() {
    char numero_romano[30];
    int i, numero_correspondente[30], soma = 0, excecao1 = 0, excecao2 = 0;
    scanf("%s", numero_romano);
    i = 0;
    while ((numero_romano[i] != '\0')&&(numero_romano[i] != '\n')) {
        numero_correspondente[i] = converte(numero_romano[i]);
        i++;
    }
    numero_correspondente[i++] = 0;  // O 0 indica o fim do vetor
    excecao2 = verifica_excecao2(numero_correspondente);
    excecao1 = verifica_excecao1(numero_romano);
    if ((excecao1 == 0) && (excecao2 ==0)) {  // sem excecoes, calcula a soma
        soma = soma_romano(numero_correspondente);
        printf("%d\n", soma);
    } else {
        printf("Valor inválido !\n");
    }
    return 0;
}
