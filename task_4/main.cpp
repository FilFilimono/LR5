#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include "Header.h"
#include "menu.h"

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
