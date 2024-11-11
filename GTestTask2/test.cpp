#include "pch.h"

TEST(Task2, Test1) {

    HINSTANCE load;
    load = LoadLibrary(L"DLL2.dll");
    typedef double (*findmax) (double*, int, int);
    findmax findMax;
    findMax = (findmax)GetProcAddress(load, "findMax");
    
    int n = 5;
    double res;

    double* array = new double[n] {1e308,1e209,1e299,1e199, 1e298};
    res = findMax(array, 0, n);
    EXPECT_EQ(res, 1e308);



    delete[] array;
    
}

TEST(Task2, Test2) {

    HINSTANCE load;
    load = LoadLibrary(L"DLL2.dll");
    typedef double (*findmax) (double*, int, int);
    findmax findMax;
    findMax = (findmax)GetProcAddress(load, "findMax");

    int n = 5;
    double res;

    double* array = new double[n] {1e-308, 1e-209, 1e-299, 1e-199, 1e-298};
    res = findMax(array, 0, n);
    EXPECT_EQ(res, 1e-199);



    delete[] array;

}

TEST(Task2, Test3) {

    HINSTANCE load;
    load = LoadLibrary(L"DLL2.dll");
    typedef double (*findmax) (double*, int, int);
    findmax findMax;
    findMax = (findmax)GetProcAddress(load, "findMax");

    int n = 5;
    double res;

    double* array = new double[n] {34, 345, -34, 11, 99};
    res = findMax(array, 0, n);
    EXPECT_EQ(res, 345);



    delete[] array;

}

TEST(Task2, Test4) {

    HINSTANCE load;
    load = LoadLibrary(L"DLL2.dll");
    typedef double (*findmax) (double*, int, int);
    findmax findMax;
    findMax = (findmax)GetProcAddress(load, "findMax");

    int n = 5;
    double res;

    double* array = new double[n] {-1e308, -1e209, -1e299, -1e199, -1e298};
    res = findMax(array, 0, n);
    EXPECT_EQ(res, -1e199);



    delete[] array;

}

TEST(Task2, Test5) {

    HINSTANCE load;
    load = LoadLibrary(L"DLL2.dll");
    typedef double (*findmax) (double*, int, int);
    findmax findMax;
    findMax = (findmax)GetProcAddress(load, "findMax");

    int n = 5;
    double res;

    double* array = new double[n] {-1e-308, -1e-209, -1e-299, -1e-199, -1e-298};
    res = findMax(array, 0, n);
    EXPECT_EQ(res, -1e-308);



    delete[] array;

}