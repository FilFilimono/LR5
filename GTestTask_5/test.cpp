#include "pch.h"

TEST(Task5, Test1) {
    int rows, cols, odd;
    rows = 3;
    cols = 3;

    long long int** array = new long long int* [rows];
    for (int i = 0; i < rows; i++)
    {
        array[i] = new long long int[cols];
    }

    array[0][0] = 567878;
    array[0][1] = 567875;
    array[0][2] = 34522;
    array[1][0] = 345211;
    array[1][1] = 32421111;
    array[1][2] = 1234687;
    array[2][0] = 2345789;
    array[2][1] = 4567778;
    array[2][2] = 657775768;


    odd = searchOddNumbers(array, rows, cols);

    long long int* oddArr = new long long int[odd];
    feelOddArr(array, oddArr, rows, cols);

    EXPECT_EQ(mid(oddArr, odd), 16494493);


    for (int i = 0; i < rows; i++)
    {
        delete[] array[i];
    }
    delete[] array;

    delete[] oddArr;

}

TEST(Task5, Test2) {
    int rows, cols, odd;
    rows = 3;
    cols = 3;

    long long int** array = new long long int* [rows];
    for (int i = 0; i < rows; i++)
    {
        array[i] = new long long int[cols];
    }

    array[0][0] = 10000;
    array[0][1] = 200000;
    array[0][2] = 3000000;
    array[1][0] = 40000000;
    array[1][1] = 500001;
    array[1][2] = 56758989;
    array[2][0] = 767867868;
    array[2][1] = 11111111112;
    array[2][2] = 345345353456;


    odd = searchOddNumbers(array, rows, cols);

    long long int* oddArr = new long long int[odd];
    feelOddArr(array, oddArr, rows, cols);

    EXPECT_EQ(mid(oddArr, odd), 500001);


    for (int i = 0; i < rows; i++)
    {
        delete[] array[i];
    }
    delete[] array;

    delete[] oddArr;

}

TEST(Task5, Test3) {
    int rows, cols, odd;
    rows = 3;
    cols = 3;

    long long int** array = new long long int* [rows];
    for (int i = 0; i < rows; i++)
    {
        array[i] = new long long int[cols];
    }

    array[0][0] = 1;
    array[0][1] = 2;
    array[0][2] = 3;
    array[1][0] = 4;
    array[1][1] = 5;
    array[1][2] = 6;
    array[2][0] = 7;
    array[2][1] = 8;
    array[2][2] = 9;


    odd = searchOddNumbers(array, rows, cols);

    long long int* oddArr = new long long int[odd];
    feelOddArr(array, oddArr, rows, cols);

    EXPECT_EQ(mid(oddArr, odd), 5);


    for (int i = 0; i < rows; i++)
    {
        delete[] array[i];
    }
    delete[] array;

    delete[] oddArr;

}

TEST(Task5, Test4) {
    int rows, cols, odd;
    rows = 3;
    cols = 3;

    long long int** array = new long long int* [rows];
    for (int i = 0; i < rows; i++)
    {
        array[i] = new long long int[cols];
    }

    array[0][0] = -567878;
    array[0][1] = -567875;
    array[0][2] = -34522;
    array[1][0] = -345211;
    array[1][1] = -32421111;
    array[1][2] = -1234687;
    array[2][0] = -2345789;
    array[2][1] = -4567778;
    array[2][2] = -657775768;


    odd = searchOddNumbers(array, rows, cols);

    long long int* oddArr = new long long int[odd];
    feelOddArr(array, oddArr, rows, cols);

    EXPECT_EQ(mid(oddArr, odd), -16494493);


    for (int i = 0; i < rows; i++)
    {
        delete[] array[i];
    }
    delete[] array;

    delete[] oddArr;

}

TEST(Task5, Test5) {
    int rows, cols, odd;
    rows = 3;
    cols = 3;

    long long int** array = new long long int* [rows];
    for (int i = 0; i < rows; i++)
    {
        array[i] = new long long int[cols];
    }

    array[0][0] = -10000;
    array[0][1] = -200000;
    array[0][2] = -3000000;
    array[1][0] = -40000000;
    array[1][1] = -500001;
    array[1][2] = -56758989;
    array[2][0] = -767867868;
    array[2][1] = -11111111112;
    array[2][2] = -345345353456;


    odd = searchOddNumbers(array, rows, cols);

    long long int* oddArr = new long long int[odd];
    feelOddArr(array, oddArr, rows, cols);

    EXPECT_EQ(mid(oddArr, odd), -500001);


    for (int i = 0; i < rows; i++)
    {
        delete[] array[i];
    }
    delete[] array;

    delete[] oddArr;

}