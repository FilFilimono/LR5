#include "pch.h"

int check(double* arr1, double* arr2, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (arr1[i] != arr2[i])
		{
			return 0;
		}
	}
	return 1;
}

double feelM(int k)
{

	if (fabs(sin(k)) <= 0.2)
	{
		return k;
	}
	else if (0.2 <= fabs(sin(k)) && fabs(sin(k)) < 0.9)
	{
		return sqrt(k);
	}
	else
	{
		return sqrt(sqrt(k));
	}
}

void makeArr(double* arr, double* arrX, double* arrY, int n)
{
	for (int k = 0; k < n; k++)
	{
		double m = feelM(k);
		arr[k] = arrX[k] + m * arrY[k];
	}
}

TEST(Task1, Test1)
{
	int n = 5, res;

	double* arrX = new double[n] {-1e200, -1e300, -1e308, -1e120, -1e299};
	double* arrY = new double[n] {-1e100, -1e235, -1e299, -1e230, -1e308};
	double* arrZ1 = new double[n];
	double* arrZ2 = new double[n];

	makeArr(arrZ1, arrX, arrY, n);
	feelArrZ(arrZ2, arrX, arrY, n);

	res = check(arrZ2, arrZ1, n);

	EXPECT_EQ(res, 1);

	delete[] arrZ1;
	delete[] arrZ2;
	delete[] arrY;
	delete[] arrX;
}

TEST(Task1, Test2)
{
	int n = 5, res;

	double* arrX = new double[n] {-1e-250, -1e-306, -1e-308, -1e1-23, -1e-299};
	double* arrY = new double[n] {-1e-300, -1e-306, -1e-299, -1e-111, -1e-248};
	double* arrZ1 = new double[n];
	double* arrZ2 = new double[n];

	makeArr(arrZ1, arrX, arrY, n);
	feelArrZ(arrZ2, arrX, arrY, n);

	res = check(arrZ2, arrZ1, n);

	EXPECT_EQ(res, 1);

	delete[] arrZ1;
	delete[] arrZ2;
	delete[] arrY;
	delete[] arrX;
}

TEST(Task1, Test3)
{
	int n = 5, res;

	double* arrX = new double[n] {34, 546, -12, -12.4, -45.88};
	double* arrY = new double[n] {-22, 23, 11, 6, 234.3};
	double* arrZ1 = new double[n];
	double* arrZ2 = new double[n];

	makeArr(arrZ1, arrX, arrY, n);
	feelArrZ(arrZ2, arrX, arrY, n);

	res = check(arrZ2, arrZ1, n);

	EXPECT_EQ(res, 1);

	delete[] arrZ1;
	delete[] arrZ2;
	delete[] arrY;
	delete[] arrX;
}

TEST(Task1, Test4)
{
	int n = 5, res;

	double* arrX = new double[n] {1e200, 1e300, 1e308, 1e120, 1e299};
	double* arrY = new double[n] {1e100, 1e235, 1e299, 1e230, 1e308};
	double* arrZ1 = new double[n];
	double* arrZ2 = new double[n];

	makeArr(arrZ1, arrX, arrY, n);
	feelArrZ(arrZ2, arrX, arrY, n);

	res = check(arrZ2, arrZ1, n);

	EXPECT_EQ(res, 1);

	delete[] arrZ1;
	delete[] arrZ2;
	delete[] arrY;
	delete[] arrX;
}

TEST(Task1, Test5)
{
	int n = 5, res;

	double* arrX = new double[n] {1e-200, 1e-300, 1e-308, 1e-120, 1e-299};
	double* arrY = new double[n] {1e-100, 1e-235, 1e-299, 1e-230, 1e-308};
	double* arrZ1 = new double[n];
	double* arrZ2 = new double[n];

	makeArr(arrZ1, arrX, arrY, n);
	feelArrZ(arrZ2, arrX, arrY, n);

	res = check(arrZ2, arrZ1, n);

	EXPECT_EQ(res, 1);

	delete[] arrZ1;
	delete[] arrZ2;
	delete[] arrY;
	delete[] arrX;
}