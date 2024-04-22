#ifndef HEADER_H
#define HEADER_H

#include <iostream>

enum STATUS
{
    ON,
    OFF
};
enum TRYB
{
    ANTENA,
    TV_KABLOWA
};
enum WEJSCIE
{
    TV,
    DVD
};

class TTelewizor
{
    STATUS status; // wl / wyl
    float glosnosc;
    float max_glosnosc{20};
    int maks_liczba_kanalow;
    int aktualny_kanal;
    int tryb;    // antena / telewizja kablowa
    int wejscie; // antena / DVD

public:
    TTelewizor(STATUS STATUS, int ILOSC_KAN);

    void OnOff() { status == OFF ? status = ON : status = OFF; };
    bool Volup();
    bool Voldown();
    void Chanup();
    void Chandown();
    void Drukuj();
};

class TPilot
{
    WEJSCIE tryb;

public:
    TPilot(WEJSCIE TRYB = TV) : tryb(TRYB){};
    void Volup(TTelewizor &t) { t.Volup(); };
    void Voldown(TTelewizor &t) { t.Voldown(); };
    void OnOff(TTelewizor &t) { t.OnOff(); };
    void Chanup(TTelewizor &t) { t.Chanup(); };
    void Chandown(TTelewizor &t) { t.Chandown(); };
};

#endif