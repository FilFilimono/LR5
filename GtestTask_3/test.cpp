#include "pch.h"

TEST(Task_3, Test1) {

    int rows = 3;
    int cols = 3;
    int countEvenNumbers;
    double res;

    long long** array = new long long* [rows];
    for (int i = 0; i < rows; ++i)
    {
        array[i] = new long long[cols];
    }


    array[0][0] = 1000;
    array[0][1] = 3000;
    array[0][2] = 9909;
    array[1][0] = 34432;
    array[1][1] = 632423;
    array[1][2] = 6343;
    array[2][0] = 6343;
    array[2][1] = 64343;
    array[2][2] = 6456777;

    countEvenNumbers = countEvenNumber(array, rows, cols);
    long long int* evenArr = new long long int[countEvenNumbers];

    newEvenArr(array, evenArr, rows, cols);

    res = productEvenArr(evenArr, countEvenNumbers);


    EXPECT_EQ(res, 1000);



    for (int i = 0; i < rows; i++)
    {
        delete[] array[i];
    }
    delete[] array;

    delete[] evenArr;

}


TEST(Task_3, Test2) {

    int rows = 3;
    int cols = 3;
    int countEvenNumbers;
    double res;

    long long** array = new long long* [rows];
    for (int i = 0; i < rows; ++i)
    {
        array[i] = new long long[cols];
    }


    array[0][0] = 14000;
    array[0][1] = 3500;
    array[0][2] = 9608;
    array[1][0] = 74432;
    array[1][1] = 932425;
    array[1][2] = 8348;
    array[2][0] = 9348;
    array[2][1] = 774348;
    array[2][2] = 1856775;

    countEvenNumbers = countEvenNumber(array, rows, cols);
    long long int* evenArr = new long long int[countEvenNumbers];

    newEvenArr(array, evenArr, rows, cols);

    res = productEvenArr(evenArr, countEvenNumbers);


    EXPECT_EQ(res, 14000);



    for (int i = 0; i < rows; i++)
    {
        delete[] array[i];
    }
    delete[] array;

    delete[] evenArr;

}

TEST(Task_3, Test3) {

    int rows = 3;
    int cols = 3;
    int countEvenNumbers;
    double res;

    long long** array = new long long* [rows];
    for (int i = 0; i < rows; ++i)
    {
        array[i] = new long long[cols];
    }


    array[0][0] = 2;
    array[0][1] = 3;
    array[0][2] = 4;
    array[1][0] = 5;
    array[1][1] = 6;
    array[1][2] = 7;
    array[2][0] = 8;
    array[2][1] = 9;
    array[2][2] = 9;

    countEvenNumbers = countEvenNumber(array, rows, cols);
    long long int* evenArr = new long long int[countEvenNumbers];

    newEvenArr(array, evenArr, rows, cols);

    res = productEvenArr(evenArr, countEvenNumbers);


    EXPECT_EQ(res, 12);


    for (int i = 0; i < rows; i++)
    {
        delete[] array[i];
    }
    delete[] array;

    delete[] evenArr;

}

TEST(Task_3, Test4) {

    int rows = 3;
    int cols = 3;
    int countEvenNumbers;
    double res;

    long long** array = new long long* [rows];
    for (int i = 0; i < rows; ++i)
    {
        array[i] = new long long[cols];
    }


    array[0][0] = -1223;
    array[0][1] = -34234;
    array[0][2] = -2343456;
    array[1][0] = -656666;
    array[1][1] = -6667778;
    array[1][2] = -768876;
    array[2][0] = -76788676;
    array[2][1] = -6676;
    array[2][2] = -9976679;

    countEvenNumbers = countEvenNumber(array, rows, cols);
    long long int* evenArr = new long long int[countEvenNumbers];

    newEvenArr(array, evenArr, rows, cols);

    res = productEvenArr(evenArr, countEvenNumbers);


    EXPECT_EQ(res, -6667778);



    for (int i = 0; i < rows; i++)
    {
        delete[] array[i];
    }
    delete[] array;

    delete[] evenArr;

}

TEST(Task_3, Test5) {

    int rows = 3;
    int cols = 3;
    int countEvenNumbers;
    double res;

    long long** array = new long long* [rows];
    for (int i = 0; i < rows; ++i)
    {
        array[i] = new long long[cols];
    }


    array[0][0] = -9223;
    array[0][1] = -94234;
    array[0][2] = -245456;
    array[1][0] = -56666;
    array[1][1] = -67778;
    array[1][2] = -776;
    array[2][0] = -788676;
    array[2][1] = -6676;
    array[2][2] = -976673;

    countEvenNumbers = countEvenNumber(array, rows, cols);
    long long int* evenArr = new long long int[countEvenNumbers];

    newEvenArr(array, evenArr, rows, cols);

    res = productEvenArr(evenArr, countEvenNumbers);


    EXPECT_EQ(res, -67778);



    for (int i = 0; i < rows; i++)
    {
        delete[] array[i];
    }
    delete[] array;

    delete[] evenArr;

}