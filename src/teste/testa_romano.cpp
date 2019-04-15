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

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


