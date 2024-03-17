#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <iostream>
#include <vector>
#include <windows.h>
#include <fstream>

#include "PlikZAdresatami.h"
#include "UzytkownikMenedzer.h"


using namespace std;

class AdresatMenedzer
{
    const int idZalogowanegoUzytkownika;
    PlikZAdresatami plikZAdresatami;
    vector <Adresat> adresaci;


    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);

public:
    AdresatMenedzer(string NAZWA_PLIKU_Z_ADRESATAMI, int ID_ZALOGOWANEGO_UZYTKOWNIKA)
        : plikZAdresatami(NAZWA_PLIKU_Z_ADRESATAMI), idZalogowanegoUzytkownika(ID_ZALOGOWANEGO_UZYTKOWNIKA)
    {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
    };
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
};

#endif
