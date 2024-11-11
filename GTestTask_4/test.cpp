#include "pch.h"

TEST(Task4, Test1) {
    
    setlocale(LC_ALL, "Rus");
    int rows = 3;
    int cols = 3;
    int res;

    double** array = new double* [rows];
    for (int i = 0; i < rows; ++i)
    {
        array[i] = new double[cols];
    }

    array[0][0] = 0;
    array[0][1] = 0;
    array[0][2] = 4;
    array[1][0] = 0;
    array[1][1] = 6;
    array[1][2] = 0;
    array[2][0] = 8;
    array[2][1] = 0;
    array[2][2] = 0;


    res = searchNULL(array, rows, cols);

    EXPECT_EQ(res, 6);

    for (int i = 0; i < rows; i++)
    {
        delete[] array[i];
    }
    delete[] array;

}

TEST(Task4, Test2) {
    setlocale(LC_ALL, "Rus");
    int rows = 3;
    int cols = 3;
    int res;

    double** array = new double* [rows];
    for (int i = 0; i < rows; ++i)
    {
        array[i] = new double[cols];
    }

    array[0][0] = 0;
    array[0][1] = 0;
    array[0][2] = 0;
    array[1][0] = 0;
    array[1][1] = 0;
    array[1][2] = 0;
    array[2][0] = 0;
    array[2][1] = 0;
    array[2][2] = 0;


    res = searchNULL(array, rows, cols);

    EXPECT_EQ(res, 9);

    for (int i = 0; i < rows; i++)
    {
        delete[] array[i];
    }
    delete[] array;

}

TEST(Task4, Test3) {
    setlocale(LC_ALL, "Rus");
    int rows = 3;
    int cols = 3;
    int res;

    double** array = new double* [rows];
    for (int i = 0; i < rows; ++i)
    {
        array[i] = new double[cols];
    }

    array[0][0] = 1;
    array[0][1] = 1;
    array[0][2] = 1;
    array[1][0] = 1;
    array[1][1] = 6;
    array[1][2] = 1;
    array[2][0] = 8;
    array[2][1] = 1;
    array[2][2] = 1;


    res = searchNULL(array, rows, cols);

    EXPECT_EQ(res, 0);

    for (int i = 0; i < rows; i++)
    {
        delete[] array[i];
    }
    delete[] array;

}


int check(double** arr1, double** arr2, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr1[i][j] != arr2[i][j])
            {
                return 0;
            }
        }
    }
    return 1;
}

TEST(Task4, Test4) {
    setlocale(LC_ALL, "Rus");
    int rows = 3;
    int cols = 3;
    int res;

    double** array = new double* [rows];
    for (int i = 0; i < rows; ++i)
    {
        array[i] = new double[cols];
    }

    double** array2 = new double* [rows];
    for (int i = 0; i < rows; ++i)
    {
        array2[i] = new double[cols];
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


    array2[0][0] = 9;
    array2[0][1] = 8;
    array2[0][2] = 7;
    array2[1][0] = 6;
    array2[1][1] = 5;
    array2[1][2] = 4;
    array2[2][0] = 3;
    array2[2][1] = 2;
    array2[2][2] = 1;


    reserve(array2, rows, cols);
    res = check(array, array2, rows, cols);

    EXPECT_EQ(res, 1);

    for (int i = 0; i < rows; i++)
    {
        delete[] array[i];
    }
    delete[] array;

    for (int i = 0; i < rows; i++)
    {
        delete[] array2[i];
    }
    delete[] array2;

}

TEST(Task4, Test5) {
    setlocale(LC_ALL, "Rus");
    int rows = 3;
    int cols = 3;
    int res;

    double** array = new double* [rows];
    for (int i = 0; i < rows; ++i)
    {
        array[i] = new double[cols];
    }

    double** array2 = new double* [rows];
    for (int i = 0; i < rows; ++i)
    {
        array2[i] = new double[cols];
    }

    array[0][0] = 234;
    array[0][1] = -234;
    array[0][2] = 34;
    array[1][0] = 4.56;
    array[1][1] = 5345345;
    array[1][2] = 1e308;
    array[2][0] = 1e-308;
    array[2][1] = 345;
    array[2][2] = 34535;


    array2[0][0] = 34535;
    array2[0][1] = 345;
    array2[0][2] = 1e-308;
    array2[1][0] = 1e308;
    array2[1][1] = 5345345;
    array2[1][2] = 4.56;
    array2[2][0] = 34;
    array2[2][1] = -234;
    array2[2][2] = 234;


    reserve(array2, rows, cols);
    res = check(array, array2, rows, cols);

    EXPECT_EQ(res, 1);

    for (int i = 0; i < rows; i++)
    {
        delete[] array[i];
    }
    delete[] array;

    for (int i = 0; i < rows; i++)
    {
        delete[] array2[i];
    }
    delete[] array2;

}