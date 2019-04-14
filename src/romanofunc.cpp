// Copyright 2019 Clara Resende
#include "romano.hpp"
int converte(char letra) {
    int valor = 0;
    if (letra == 'I')
        valor = 1;
    if (letra == 'V')
        valor = 5;
    if (letra == 'X')
        valor = 10;
    return valor;
}
