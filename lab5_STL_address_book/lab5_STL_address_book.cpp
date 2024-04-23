#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

#include "ContactBook.hpp"



int main() {
    std::vector<Contact> ksiazka_adresowa;

    dodaj_kontakt(ksiazka_adresowa, "Kowalski", "123456789");
    dodaj_kontakt(ksiazka_adresowa, "Nowak", "987654321");
    dodaj_kontakt(ksiazka_adresowa, "Brzezinski", "555555555");

    sortuj_ksiazke(ksiazka_adresowa);

    std::cout << "Posortowana ksiazka adresowa:\n";
    wyswietl_ksiazke(ksiazka_adresowa);

    std::cout << "\nWyniki wyszukiwania:\n";
    std::cout << "Nuumer dla Kowalski: " << wyszukaj_numer(ksiazka_adresowa, "Kowalski") << std::endl;
    std::cout << "Numer dla Nowak: " << wyszukaj_numer(ksiazka_adresowa, "Nowak") << std::endl;

    return 0;
}

/*
OUTPUT:
Posortowana ksiazka adresowa:
Nazwisko: Brzezinski, Numer: 555555555
Nazwisko: Kowalski, Numer: 123456789
Nazwisko: Nowak, Numer: 987654321

Wyniki wyszukiwania:
Nuumer dla Kowalski: 123456789
Numer dla Nowak: 987654321
*/