// Copyright 2019 Clara Resende
#include <stdio.h>
#include <string.h>
#include "romano.hpp"
int main() {
    char numero_romano[30];
    int i, numero_correspondente[30];
    scanf("%s", numero_romano);
    i=0;
    while((numero_romano[i] != '\0')&&(numero_romano[i] != '\n')) {
        numero_correspondente[i] = converte(numero_romano[i]);
        i++;
    }
    numero_correspondente[i++] = 0;
    soma_romano(numero_correspondente);
    return 0;
}
