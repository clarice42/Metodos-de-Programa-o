// Copyright 2019 Clara Resende
#include <stdio.h>
#include "romano.hpp"
int main() {
    char numero_romano[30];
    int i, numero_correspondente = 0;
    scanf("%s", numero_romano);
    for (i = 0; i <2; i++) {
        numero_correspondente = converte(numero_romano[i]);
        printf("%d", &numero_correspondente);
    }
    return 0;
}
