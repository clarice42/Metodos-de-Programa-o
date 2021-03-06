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
    else  // letras invalidas
        return -1;
}
/*Soma se o primeiro numero for maior/igual ao proximo e subtrai 
  caso contrario*/
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
/* Funcao para excecoes do tipo LL e IIII*/
int verifica_excecao1(char numero[]) {
    int i = 0, retorno = 0;
    while ((numero[i] != '\0') && (numero[i] != '\n')) {
        if (numero[i] == numero[i+1]) {
            if (numero[i] == 'V' || numero[i] == 'L' || numero[i] == 'D')
                retorno = -1;
            if ((numero[i+1] == numero[i+2]) && (numero[i+2] == numero[i+3])) {
                if (numero[i] == 'X' || numero[i] == 'I')
                    retorno = -1;
                if (numero[i] == 'C' || numero[i] == 'M')
                    retorno = -1;
            }
        }
        i++;
    }
    if (retorno == 0) {
        return 0;
    } else {
        return -1;
    }
}
/* Funcao para excecoes do tipo WV e LC */
int verifica_excecao2(int vetor[]) {
    int i = 0, retorno = 0;
    while (vetor[i] != 0) {
        if (vetor[i] == -1) {
            retorno = -1;
        }
        if (vetor[i+1] == (2*vetor[i])) {
            retorno = -1;
        }
        i++;
    }
    if (retorno == 0) {
        return 0;
    } else {
        return -1;
    }
}
/* Funcao para excecoes do tipo IIV e MDCM */
int verifica_excecao3(int vetor[]) {
    int i = 0, retorno = 0, tamanho = 0;
    while (vetor[i] != 0) {
        // o loop deve parar no ultimo numero valido
        if (vetor[i+1] == 0)
            break;
        if ((vetor[i] + (vetor[i+1]) < vetor[i+2])) {
            retorno = -1;
        }
        i++;
    }
    if (retorno == 0) {
        return 0;
    } else {
        return -1;
    }
}
