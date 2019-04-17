// Copyright 2019 Clara Resende

#include <stdio.h>
#include <string.h>
#include "romano.hpp"

int main() {
    char numero_romano[30];
    int i, numero_correspondente[30], soma = 0;
    int excecao1 = 0, excecao2 = 0, excecao3 = 0;
    scanf("%s", numero_romano);
    i = 0;
    while ((numero_romano[i] != '\0')&&(numero_romano[i] != '\n')) {
        numero_correspondente[i] = converte(numero_romano[i]);
        i++;
    }
    numero_correspondente[i++] = 0;  // O 0 indica o fim do vetor
    excecao1 = verifica_excecao1(numero_romano);
    excecao2 = verifica_excecao2(numero_correspondente);
    excecao3 = verifica_excecao3(numero_correspondente);
    if ((excecao1 == 0) && (excecao2 == 0) && (excecao3 == 0)) {
        soma = soma_romano(numero_correspondente);
        printf("%d\n", soma);
    } else {
        printf("Numero inválido !\n");
    }
    return 0;
}
