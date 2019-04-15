// Copyright 2019 Clara Resende
#include "gtest/gtest.h"
#include "romano.hpp"

TEST(converteteste, comparandoLetras){
    EXPECT_EQ(1, converte('I'));
    EXPECT_EQ(5, converte('V'));
    EXPECT_EQ(10, converte('X'));
}

int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


