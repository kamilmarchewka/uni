#include <iostream>
#include <cmath>
using namespace std;

class Osoba
{
public:
    void wczytajDane()
    {
        cout << "Podaj" << endl;
        cout << "Imie: ";
        cin >> imie;
        cout << "Nazwisko: ";
        cin >> nazwisko;
        cout << "Ulica: ";
        cin >> ulica;
    };
    void wyswietlDane()
    {
        cout << imie << " " << nazwisko << " " << ulica << endl;
    };

protected:
    string imie, nazwisko, ulica;
};

class Kadra : public Osoba
{
public:
    void wczytajDane()
    {
        Osoba::wczytajDane();

        cout << "Wyksztalcenie: ";
        cin >> wyksztalcenie;
    };
    void wyswietlDane()
    {
        cout << imie << ", " << nazwisko << ", ul. " << ulica << ", wyksztalcenie " << wyksztalcenie << endl;
    };

private:
    string wyksztalcenie;
};

int main()
{
    Kadra dyrektor;
    dyrektor.wczytajDane();
    cout << "---------------------" << endl;
    dyrektor.wyswietlDane();

    return 0;
}