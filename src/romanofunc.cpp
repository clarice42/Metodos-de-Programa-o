// Copyright 2019 Clara Resende

#include <stdio.h>
#include "romano.hpp"

int converte(char letra) {
    if (letra == 'I')
        return 1;
    else if (letra == 'V')
        return 5;
    else if (letra == 'X')
        return 10;
    else if (letra == 'L')
        return 50;
    else if (letra == 'C')
        return 100;
    else if (letra == 'D')
        return 500;
    else if (letra == 'M')
        return 1000;
    else
        return -1;
}
int soma_romano(int vetor[]) {
    int i = 0, soma = 0;
    while (vetor[i] != 0) {
        if (vetor[i] < vetor[i+1]) {
            soma -= vetor[i];
        } else {
            soma += vetor[i];
        }
        i++;
    }
    return soma;
}
int verifica_excecao(char numero[]){
    int i = 0;
    while ((numero[i] != '\0') && (numero[i] != '\n')){
        if (numero[i] == numero[i+1]){
            if (numero[i] == 'V' || numero[i] == 'L' || numero[i] == 'D')
                return -1;   
            else if ((numero[i+1] == numero[i+2]) && (numero[i+2] == numero[i+3])){
                if (numero[i] == 'X' || numero[i] == 'I')
                    return -1;
                else if (numero[i] == 'C' || numero[i] == 'M')
                    return -1;
                else{
                    return 0;
                }
            }
            else {
                return 0;
            }
        }
        else {
            return 0;
        }
        i++;
    }
}