#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");

    //PREZENTACJA DZIALANIA

    //Wczytanie pliku, dodanie nowego usera, zapisanie w pliku i wyswietlenie

    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    system("pause");
    system ("cls");
    cout << "Rejestrowanie" << endl;
    ksiazkaAdresowa.rejestracjaUzytkownika();
    cout << "Dodaj kolejnego uzytkownika" << endl;
    ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    system("pause");
    system ("cls");

    //Logowanie, tworzenie pliku z adresatami (jesli nie utworzony), dodawanie adresatow do wektora i nadpisanie pliku

    ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.wylogowanieUzytkownika();
    system("pause");
    system ("cls");

    //Prosba o dodanie adresatow dla innego usera, zeby sprawdzic poprawnosc wyswietlania adresatow odpowedniego uzytkownika

    ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.wylogowanieUzytkownika();
    system("pause");
    system ("cls");

    //Ponowne zalogowanie i mozliwosc sprawdzenia adresatow WYBRANEGO usera

    ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.wyswietlWszystkichAdresatow();

    return 0;
}
