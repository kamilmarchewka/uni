#include "header.hpp"

int main()
{
    int sampleArr[] = {1, 2, 3, -1, 10};
    int size = sizeof(sampleArr) / sizeof(sampleArr[0]);
    Tablica mojaTablica(sampleArr, size);

    cout << "Max: " << mojaTablica.max() << endl;
    cout << "Min: " << mojaTablica.min() << endl;

    return 0;
}