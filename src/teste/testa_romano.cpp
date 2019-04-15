// Copyright 2019 Clara Resende
#include "gtest/gtest.h"
#include "romano.hpp"

TEST(converteTeste, comparandoLetras) {
    EXPECT_EQ(1, converte('I'));
    EXPECT_EQ(5, converte('V'));
    EXPECT_EQ(10, converte('X'));
    EXPECT_EQ(50, converte('L'));
    EXPECT_EQ(100, converte('C'));
    EXPECT_EQ(500, converte('D'));
    EXPECT_EQ(1000, converte('M'));
}

TEST(somaRomano, soma){
    int vetor_teste1[] = {1, 1, 1, 0};
    int vetor_teste2[] = {5, 1, 1, 1, 0};
    int vetor_teste3[] = {10, 10, 5, 1, 0};
    int vetor_teste4[] = {50, 10, 10, 10, 5, 0};
    int vetor_teste5[] = {100, 100, 100, 50, 5, 1, 1, 1, 0};
    int vetor_teste6[] = {500, 100, 1, 1, 0};
    int vetor_teste7[] = {1000, 100, 100, 5, 0};
    int vetor_teste8[] = {1000, 1000, 500, 100, 100, 10, 10, 1, 1, 0};

    EXPECT_EQ(3, soma_romano(vetor_teste1));
    EXPECT_EQ(8, soma_romano(vetor_teste2));
    EXPECT_EQ(26, soma_romano(vetor_teste3));
    EXPECT_EQ(85, soma_romano(vetor_teste4));
    EXPECT_EQ(358, soma_romano(vetor_teste5));
    EXPECT_EQ(602, soma_romano(vetor_teste6));
    EXPECT_EQ(1205, soma_romano(vetor_teste7));
    EXPECT_EQ(2722, soma_romano(vetor_teste8));
}

TEST(somaRomano, subtracao){
    int vetor_teste1[] = {1, 5, 0};
    int vetor_teste2[] = {1000, 100, 500, 10, 100, 1, 10, 0};
    int vetor_teste3[] = {1000, 1000, 100, 100, 100, 10, 50, 1, 5, 0};
    int vetor_teste4[] = {1000, 1000, 100, 1000, 10, 100, 1, 10, 0};
    int vetor_teste5[] = {1000, 100, 1000, 10, 100, 1, 10, 0};
    int vetor_teste6[] = {10, 50, 1, 10, 0};
    int vetor_teste7[] = {500, 100, 100, 1, 10, 0};
    int vetor_teste8[] = {10, 100, 1, 5, 0};

    EXPECT_EQ(4, soma_romano(vetor_teste1));
    EXPECT_EQ(1499, soma_romano(vetor_teste2));
    EXPECT_EQ(2344, soma_romano(vetor_teste3));
    EXPECT_EQ(2999, soma_romano(vetor_teste4));
    EXPECT_EQ(1999, soma_romano(vetor_teste5));
    EXPECT_EQ(49, soma_romano(vetor_teste6));
    EXPECT_EQ(709, soma_romano(vetor_teste7));
    EXPECT_EQ(94, soma_romano(vetor_teste8));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


