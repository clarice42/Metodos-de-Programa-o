// Copyright 2019 Clara Resende
#include <stdio.h>
#include <string.h>
#include "romano.hpp"
int main() {
    char numero_romano[30];
    int i, numero_correspondente = 0;
    scanf("%s", numero_romano);
    i=0;
    while((numero_romano[i] != '\0')&&(numero_romano[i] != '\n')) {
        numero_correspondente = converte(numero_romano[i]);
        printf("%d", numero_correspondente);
        i++;
    }
    return 0;
}
