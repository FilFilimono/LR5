#include <iostream>
#include <algorithm>
#include "menu.h"

void getArr(double** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << "Введите элемент матрицы строки " << (i + 1)
                << " и столбца " << (j + 1) << ": ";
            arr[i][j] = getDouble(-1.7e308, 1.7e308);
        }
    }
}

void outArr(double** arr, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << '\n';
    }
}

int searchNULL(double** arr, int rows, int cols)
{
    int counter = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == 0)
            {
                counter += 1;
                if (counter > 0)
                {
                    std::cout << counter << " нулевой элемент, с индексами: строка - " << i << ",   столбец - " << j << "\n";
                }
            }
        }
    }

    return counter;
}

void reserve(double** arr, int rows, int cols)
{
    std::reverse(arr, arr + rows);
    for (int i = 0; i < rows; i++)
    {
        std::reverse(arr[i], arr[i] + cols);
    }
}

void startProgram()
{
    setlocale(LC_ALL, "Rus");

    int rows, cols, countNull;
    std::cout << "Введите коллисество строчек: ";
    rows = getInteger(0, 250);
    std::cout << "Введите коллисество столбцов: ";
    cols = getInteger(0, 250);

    double** dArr = new double* [rows];
    for (int i = 0; i < rows; i++)
    {
        dArr[i] = new double[cols];
    }

    getArr(dArr, rows, cols);
    std::cout << '\n';
    std::cout << "Начальный массив:\n";
    outArr(dArr, rows, cols);
    std::cout << '\n';

    std::cout << '\n';
    countNull = searchNULL(dArr, rows, cols);
    std::cout << "Общее количество нулей: " << countNull << "\n";
    std::cout << '\n';
    
    reserve(dArr, rows, cols);
    std::cout << '\n';
    std::cout << "Развернутый массив:\n";
    outArr(dArr, rows, cols);
    std::cout << '\n';

    for (int i = 0; i < rows; i++)
    {
        delete[] dArr[i];
    }
    delete[] dArr;
}