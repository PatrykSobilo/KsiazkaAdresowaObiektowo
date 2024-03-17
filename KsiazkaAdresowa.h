#ifndef KASIAZKAADRESOWA_H
#define KASIAZKAADRESOWA_H
#include <iostream>

#include "UzytkownikMenedzer.h"
#include "AdresatMenedzer.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikMenedzer uzytkownikMenedzer;
    const string nazwaPlikuZAdresatami;
    AdresatMenedzer* adresatMenedzer;


public:
    KsiazkaAdresowa(string NAZWA_PLIKU_Z_UZYTKOWNIKAMI, string NAZWA_PLIKU_Z_ADRESATAMI)
    : uzytkownikMenedzer(NAZWA_PLIKU_Z_UZYTKOWNIKAMI),
    nazwaPlikuZAdresatami(NAZWA_PLIKU_Z_ADRESATAMI),
    adresatMenedzer(nullptr){}; // Inicjalizacja wskaznika jako nullptrv (pusty adres)
    ~KsiazkaAdresowa()
    {
        delete adresatMenedzer; // Zwolnienie pamieci przy usuwaniu obiektu KsiazkaAdresowa
        adresatMenedzer = NULL;
    }

    void rejestracjaUzytkownika();
    int logowanieUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void zmianaHaslaZalogowanegoUzytkownika();
    void wylogowanieUzytkownika();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
};
#endif
