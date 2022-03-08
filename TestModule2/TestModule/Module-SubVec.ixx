export module test:subvec;
import <vector>;
import <algorithm>;
import :sub;

void WypiszVec()
{
	std::vector<Osoba> Ludzie;
	for (int i = 0; i < 3; i++)
	{
		Osoba Czlowiek;
		Czlowiek.Nazwij();
		Ludzie.push_back(Czlowiek);
	}
	std::sort(Ludzie.begin(), Ludzie.end());
	for (int i = 0; i < 3; i++)
	{
		std::cout << Ludzie[i].Imie << " " << Ludzie[i].Nazwisko << " hello!\n";
	}
}
