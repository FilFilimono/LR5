#include <iostream>
#include <string>
#include <cmath>

void printInfo()
{
    setlocale(LC_ALL, "Rus");
    system("cls");
    std::cout << "��� �� ������ �������?" << std::endl;
    std::cout << "1. ��������� ���������.\n"
        << "2. �������� ���������� � ���������.\n"
        << "3. ����� �� ���������." << std::endl;
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
            std::cout << "����������� �������� ��������. ��������� ��� ���: ";
        }
    }

    return correctVariant;
}

void getInfo()
{
    setlocale(LC_ALL, "Rus");
    system("cls");
    std::cout << "����������" << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;
    std::cout << "\n��������� ������ -- ��������� ������.\n"
        << "��������� ��������� Z ������, �� ������� Zk = Xk + m * Yk.\n"
        << "������� X, Y �������� � ����������.\n" << std::endl;
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
        std::cout << "\n����������� �������� ��������.\n "
            << "���������� ��� ���: ";
    }
    return value;
}

bool isDouble(std::string& str)
{
    int checkDot = 0;
    int checkE = 0;
    int checkMinus = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (!std::isdigit(str[i]) && str[i] != '.' && str[i] != 'e' && str[i] != '-')
        {
            return false;
        }

        if (str[i] == '.' && checkDot == 1)
        {
            return false;
        }
        if (str[i] == '.')
        {
            checkDot = 1;
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

double getDouble(long double begin, long double end)
{
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
        std::cout << "\n����������� �������� �������� x.\n "
            << "���������� ��� ���: ";
    }
    return value;
}
