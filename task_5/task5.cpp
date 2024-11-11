#include <iostream>
#include "menu.h"

void getArr(long long int** arr, int rows, int cols)
{
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

long long int modul(long long int k)
{
    if (k < 0)
    {
        return -k;
    }
    return k;
}

void outArr(long long int** arr, int rows, int cols)
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

bool out2Arr(long long int* arr, int counter)
{
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
        return false;
    }
    return true;
}

int searchOddNumbers(int long long** arr, int rows, int cols)
{
    int odd = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if ((j + 1) % 2 == 0)
            {
                if (modul(arr[i][j]) % 2 == 1)
                {
                    odd++;
                }
            }
        }
    }
    return odd;
}

void feelOddArr(long long int** arr, long long int* oddArr, int rows, int cols)
{
    int counter = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if ((j + 1) % 2 == 0)
                if (modul(arr[i][j]) % 2 == 1)
                {
                    oddArr[counter] = arr[i][j];
                    counter++;
                }
        }
    }
}

double mid(int long long* arr, int rows)
{
    double sum = 0;
    for (int i = 0; i < rows; i++)
    {
        sum += arr[i];
    }
    return (double)(sum / rows);
}

void startProgram()
{
    setlocale(LC_ALL, "Rus");

    int rows, cols, odd;
    bool check;
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
    outArr(arr, rows, cols);
    std::cout << '\n';
    odd = searchOddNumbers(arr, rows, cols);

    long long int* oddArr = new long long int[odd];
    feelOddArr(arr, oddArr, rows, cols);

    check = out2Arr(oddArr, odd);
    std::cout << '\n';
    std::cout << '\n';
    if (check)
    {
        std::cout << "Среднее арифметическое элементов: " << mid(oddArr, odd) << '\n';
    }
  
    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    delete[] oddArr;
}