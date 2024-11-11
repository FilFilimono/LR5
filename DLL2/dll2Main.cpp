#include <algorithm>

extern "C" __declspec(dllexport) double findMax(double *arr, int start, int end)
{
    if (end - start <= 1)
    {
        return arr[start];
    }
    else if (end - start == 2)
    {
        return std::max(arr[start], arr[start + 1]);
    }

    int thirdPart = (end - start) / 3;
    int mid = start + thirdPart;

    double maxFirstThird = findMax(arr, start, mid);
    double maxRemaining = findMax(arr, mid, end);

    return std::max(maxFirstThird, maxRemaining);
}