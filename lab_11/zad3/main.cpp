#include "header.hpp"

int main()
{
    int arr[]{1, 3, 2, 8, 5, 6, 1, 2, 3};
    printArray(arr, sizeof(arr) / sizeof(arr[0]));

    return 0;
}