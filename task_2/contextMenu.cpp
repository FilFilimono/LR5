#include <iostream>
#include <string>
#include <cmath>


void printInfo()
{
    setlocale(LC_ALL, "Rus");
    system("cls");
    std::cout << "Что вы хотите сделать?" << std::endl;
    std::cout << "1. Запустить программу.\n"
        << "2. Получить информацию о программе.\n"
        << "3. Выйти из программы." << std::endl;
}

bool isInteger1(const std::string& str)
{
    for (int i = 0; i < str.size(); i++)
    {
        if (!std::isdigit(str[i]))
            return false;
    }
    return true;
}

int getVariant(int value)
{
    setlocale(LC_ALL, "Rus");
    int correctVariant;
    std::string strVariant;
    std::cout << "~ % ";
    while (true)
    {
        std::getline(std::cin, strVariant);
        try
        {
            correctVariant = std::stoi(strVariant);
            if (correctVariant >= 1 && correctVariant <= value && isInteger1(strVariant))
            {
                break;
            }
        }
        catch (std::exception&)
        {
        }
        if (strVariant.empty())
        {
            std::cout << "~ % ";
        }
        else
        {
            std::cout << "Некоректное веденное значение. Поробуйте еще раз: ";
        }
    }

    return correctVariant;
}
void getInfo()
{
    setlocale(LC_ALL, "Rus");
    system("cls");
    std::cout << "Информация" << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;
    std::cout << "\nПрограмму сделал -- Филимонов Филипп.\n"
        << "Программа находит максимальное значение массива и выводит его на экран.\n"
        << "Делает она это с помощью рекурсивной функции.\n" << std::endl;
}
bool isInteger(std::string& str)
{
    int checkE = 0;
    int checkMinus = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (!std::isdigit(str[i]) && str[i] != 'e' && str[i] != '-')
        {
            return false;
        }

        if (str[i] == 'e' && checkE == 1)
        {
            return false;
        }
        if (str[i] == 'e')
        {
            checkE = 1;
        }

        if (str[i] == '-' && checkMinus == 1)
        {
            return false;
        }
        if (str[i] == '-')
        {
            checkMinus = 1;
        }

    }
    return true;
}
double getInteger(double begin, double end)
{
    setlocale(LC_ALL, "Rus");
    double value;
    std::string strValue;

    while (true)
    {
        std::getline(std::cin, strValue);

        try
        {
            value = std::stod(strValue);
            if (isInteger(strValue) && value > begin && value <= end)
            {
                break;
            }
        }
        catch (std::invalid_argument&)
        {
        }
        catch (std::out_of_range&)
        {
        }
        std::cout << "\nНекоректное веденное значение.\n "
            << "Попробуйте еще раз: ";
    }
    return value;
}
bool isDouble(std::string& str)
{

    int checkE = 0;
    int checkMinus = 0;
    int checkDot = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (!std::isdigit(str[i]) && str[i] != 'e' && str[i] != '-')
        {
            return false;
        }

        if (str[i] == 'e' && checkE == 1)
        {
            return false;
        }
        if (str[i] == 'e')
        {
            checkE = 1;
        }

        if (str[i] == '-' && checkMinus == 1)
        {
            return false;
        }
        if (str[i] == '-')
        {
            checkMinus = 1;
        }
    }
    return true;
}

double getDouble(double begin, double end)
{
    setlocale(LC_ALL, "Rus");
    long double value;
    std::string strValue;

    while (true)
    {
        std::getline(std::cin, strValue);
        try
        {
            value = std::stod(strValue);
            if (isDouble(strValue) && value >= begin && value <= end)
            {
                break;
            }
        }
        catch (std::invalid_argument&)
        {
        }
        catch (std::out_of_range&)
        {
        }
        std::cout << "\nНекоректное веденное значение x.\n "
            << "Попробуйте еще раз: ";
    }
    return value;
}
