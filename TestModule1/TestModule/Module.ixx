export module test;
import <iostream>;
import <string>;

struct Osoba {
    std::string Nazwisko;
    std::string Imie;
    Osoba Nazwij() {
        std::cin >> this->Imie >> this->Nazwisko;
        return *this;
    }
};

void Wypisz() { 
    Osoba Czlowiek;
    Czlowiek.Nazwij();
    std::cout << "Hello " << Czlowiek.Imie << " " << Czlowiek.Nazwisko << "!\n";
}

export void WypiszMain() {
    Wypisz();
}