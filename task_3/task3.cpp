#include <iostream>
#include <string>
#include <cmath>
#include "menu.h"



void getArr(long long int** arr, int rows, int cols)
{
    setlocale(LC_ALL, "Rus");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << "Введите элемент матрицы строки " << (i + 1)
                << " и столбца " << (j + 1) << ": ";
            arr[i][j] = getInteger(9223372036854775807 * (-1), 9223372036854775807);
        }
    }
}

void out2Arr(long long int** arr, int rows, int cols)
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

void outArr(long long int* arr, int counter)
{
    setlocale(LC_ALL, "Rus");
    if (counter > 0)
    {
        std::cout << "Новый массив:\n";
        for (int i = 0; i < counter; i++)
        {
            std::cout << arr[i] << " ";
        }
    }
    else
    {
        std::cout << "Массив пуст\n";
    }
}

int countEvenNumber(long long int** arr, int rows, int cols)
{
    int counterEvenNumber = 0;
    for (int i = 0; i < rows; i++)
    {
        if (arr[i][i] % 2 == 0)
        {
            counterEvenNumber++;
        }
    }
    return counterEvenNumber;
}

void newEvenArr(long long int** arr, long long int* evenArr, int rows, int cols)
{
    int j = 0;
    for (int i = 0; i < rows; i++)
    {
        if (arr[i][i] % 2 == 0)
        {
            evenArr[j] = arr[i][i];
            j++;
        }
    }
}

double productEvenArr(long long int* arr, int counter)
{
    setlocale(LC_ALL, "Rus");
    if (counter > 0)
    {
        double product = 1;
        for (int i = 0; i < counter; i++)
        {
            product *= arr[i];
        }
        return product;
    }
}


void startProgram()
{
    setlocale(LC_ALL, "Rus");

    int rows, cols, countEvenNumbers;
    double res;
    std::cout << "Введите коллисество строчек: ";
    rows = getInteger(0, 250);
    std::cout << "Введите коллисество столбцов: ";
    cols = getInteger(0, 250);

    long long int** arr = new long long int* [rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new long long int[cols];
    }

    getArr(arr, rows, cols);
    std::cout << '\n';
    std::cout << "Первоначальный массив:\n";
    out2Arr(arr, rows, cols);
    std::cout << '\n';

    countEvenNumbers = countEvenNumber(arr, rows, cols);
    long long int* evenArr = new long long int[countEvenNumbers];

    newEvenArr(arr, evenArr, rows, cols);

    outArr(evenArr, countEvenNumbers);

    std::cout << '\n';
    std::cout << '\n';

    res = productEvenArr(evenArr, countEvenNumbers);
    std::cout << "Произведение равно: " << res;
    std::cout << '\n';

    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    delete[] evenArr;

    system("pause");
}

