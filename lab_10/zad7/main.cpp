#include <iostream>
#include <fstream>
using namespace std;

class Matrix
{
public:
    Matrix(int values[][10])
    {
        for (int i = 0; i < 10; i++)
            for (int j = 0; j < 10; j++)
                array[i][j] = values[i][j];
    };
    Matrix() = default;

    void drukuj()
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
                cout << array[i][j];
            cout << endl;
        }
    }
    void przeksztalc()
    {
        int arrayCopy[10][10];
        for (int i = 0; i < 10; i++)
            for (int j = 0; j < 10; j++)
                arrayCopy[i][j] = array[i][j];

        for (int i = 0; i < 10; i++)
            for (int j = 0; j < 10; j++)
                array[i][j] = arrayCopy[j][i];
    }
    void zapisz(string PATH)
    {
        file.open(PATH);

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
                file << array[i][j];
            file << endl;
        }

        file.close();
    };
    void odczytaj(string PATH)
    {
        file.open(PATH);

        if (file.good())
        {
            char c;
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    file >> c;
                    array[i][j] = atoi(&c);
                }
            }
        }

        file.close();
    };

private:
    int array[10][10]{0};
    fstream file;
};

int main()
{
    int sampleArr[][10] = {
        {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
    };
    Matrix arr(sampleArr);
    arr.drukuj();
    cout << endl;
    arr.przeksztalc();
    arr.zapisz("dane.txt");
    arr.drukuj();
    cout << endl;
    arr.odczytaj("dane.txt");
    arr.drukuj();

    return 0;
}