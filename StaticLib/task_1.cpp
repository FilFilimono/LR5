#include <iostream>
#include <cmath>
#include <algorithm>
#include "menu.h"

void getArr(double* arr, int n, int choice)
{
    if (choice == 1)
    {
        for (int i = 0; i < n; i++)
        {
            std::cout << "Введите элемент " << (i + 1) << " массива X: ";
            arr[i] = getDouble(-1.7e308, 1.7e308);
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            std::cout << "Введите элемент " << (i + 1) << " массива Y: ";
            arr[i] = getDouble(-1.7e308, 1.7e308);
        }
    }
}

void outArr(double* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
}

double mValue(int k)
{
    double m;
    if (fabs(sin(k)) <= 0.2)
    {
        m = k;
    }
    else if (0.2 <= fabs(sin(k)) && fabs(sin(k)) < 0.9)
    {
        m = sqrt(k);
    }
    else
    {
        m = sqrt(sqrt(k));
    }

    return m;
}

void feelArrZ(double* arrZ, double* arrX, double* arrY, int n)
{
    for (int k = 0; k < n; k++)
    {
        double m = mValue(k);

        arrZ[k] = arrX[k] + m * arrY[k];
    }
}

void startProgram()
{
    int n;
    std::cout << "Введите размер массива: ";
    n = getInteger(0, 400);

    double* arrZ = new double[n];

    double* arrX = new double[n];
    double* arrY = new double[n];

    std::fill(arrZ, arrZ + n, 0.0);

    getArr(arrX, n, 1);
    std::cout << '\n';
    getArr(arrY, n, 0);

    std::cout << "\nМассив X:\n";
    outArr(arrX, n);
    std::cout << std::endl
        << std::endl;
    std::cout << "\nМассив Y:\n";
    outArr(arrY, n);
    std::cout << '\n';
    feelArrZ(arrZ, arrX, arrY, n);
    std::cout << '\n';
    std::cout << "\nМасиив Z:\n";
    outArr(arrZ, n);
    std::cout << '\n';
    std::cout << '\n';

    delete[] arrZ;
    delete[] arrY;
    delete[] arrX;
}
