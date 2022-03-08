export module test:sub;
import <iostream>;
import <string>;

struct Osoba {
    std::string Nazwisko;
    std::string Imie;
    Osoba Nazwij();
    auto operator<=>(const Osoba&) const = default;
};

void Wypisz();