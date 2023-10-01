#include "Header.h"
//extern char skaiciavimo_Strategija;
int main() {
	cout << "Kaip skaicioti galutini? v/m";
	char in; cin >> in;
	skaiciavimo_Strategija = in;

	cout << "Iveskite studenta";
	vector <studentas> grupe;

	for (int i = 0; i < 1; i++) {
		studentas K;
		grupe.push_back(K);
		K.~studentas();
	}

	cout << endl << grupe.size() << endl;
	printf("%10s|%20s|", "Vardas", "Pavarde");
	for (int i = 0; i < grupe[0].getPazNr(); i++)
		printf("%s%d|", "ND", i + 1);
	printf("$10s|\n", "Egzaminas");
	for (auto& a : grupe) a.printas();
	cout << endl;
	for (auto& a : grupe) a.printasRez();
	system("pause");
}