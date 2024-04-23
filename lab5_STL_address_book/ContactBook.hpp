#ifndef CONTACTBOOK_HPP
#define CONTACTBOOK_HPP
#include "contact.hpp"
#include <string>

void dodaj_kontakt(std::vector<Contact>& ksiazka, const std::string& nazwisko, const std::string& numer) {
    ksiazka.push_back({ nazwisko, numer });
}

void sortuj_ksiazke(std::vector<Contact>& ksiazka) {
    std::sort(ksiazka.begin(), ksiazka.end(), [](const Contact& a, const Contact& b) {
        return a.nazwisko < b.nazwisko;
        });
}

std::string wyszukaj_numer(const std::vector<Contact>& ksiazka, const std::string& nazwisko) {
    for (const auto& kontakt : ksiazka) {
        if (kontakt.nazwisko == nazwisko) {
            return kontakt.numer_telefonu;
        }
    }
    return "Nie znaleziono kontaktu";
}

void wyswietl_ksiazke(const std::vector<Contact>& ksiazka) {
    for (const auto& kontakt : ksiazka) {
        std::cout << "Nazwisko: " << kontakt.nazwisko << ", Numer: " << kontakt.numer_telefonu << std::endl;
    }
}
#endif