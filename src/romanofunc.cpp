// Copyright 2019 Clara Resende
#include "romano.hpp"
#include <stdio.h>
int converte(char letra) {
    if (letra == 'I')
        return 1;
    if (letra == 'V')
        return 5;
    if (letra == 'X')
        return 10;
    if (letra == 'L')
        return 50;
    if (letra == 'C')
        return 100;
    if (letra == 'D')
        return 500;
    if (letra == 'M')
        return 1000;
}
int soma_romano(int vetor[]) {
    int i = 0, soma = 0;
    while(vetor[i] != 0){
        if(vetor[i] < vetor[i+1]){
            soma -= vetor[i];
        }
        else{
            soma += vetor[i];
        }
        i++;
    }    
    return soma;
}