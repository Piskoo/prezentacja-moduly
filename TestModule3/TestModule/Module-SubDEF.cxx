module test:sub;

Osoba Osoba::Nazwij() {  
    std::cin >> this->Imie >> this->Nazwisko;
    return *this;
}


void Wypisz() {
    Osoba Czlowiek;
    Czlowiek.Nazwij();
    std::cout << "Hello " << Czlowiek.Imie << " " << Czlowiek.Nazwisko << "!\n";
}