#include <iostream>
#include <string>
#include <Windows.h>
#include "menu.h"


void getArr(double* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "Введите значения " << i + 1 << " элемента массива: ";
        arr[i] = getDouble(-1.7e308, 1.7e308);
    }
}

void startProgram()
{
    HINSTANCE load;
    load = LoadLibrary(L"DLL2.dll");
    typedef double (*findmax) (double*, int, int);

    findmax findMax;
    findMax = (findmax)GetProcAddress(load, "findMax");
    
    setlocale(LC_ALL, "Rus");
    int n;
    std::cout << "Введите размер массива: ";
    n = getInteger(0, 300);
    double* arr = new double[n];

    getArr(arr, n);


    std::cout << "\n\n";

    std::cout << "Значение максимального элемента равно: " << findMax(arr, 0, n) << '\n';

    delete[] arr;
    FreeLibrary(load);

}




int main()
{   
    setlocale(LC_ALL, "Rus");
    int choice;

    do
    {
        printInfo();
        choice = getVariant(3);

        switch (choice)
        {
        case 1:
            startProgram();
            break;
        case 2:
            getInfo();
            break;
        }
        if (choice != 3)
        {
            std::cout << "\nНажмите Enter для продолжения..." << std::endl;
            std::string s;
            getline(std::cin, s);
        }

    } while (choice != 3);

    system("pause");
    return 0;
}