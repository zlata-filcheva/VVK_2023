#include "Header.h"
studentas::studentas() {
	cout << "Ivesk varda: "; cin >> vard;
	cout << "Ivesk pavarde: "; cin >> pav;
	cout << "Kiek pazymiu buvo semestre? ";
	int n; cin >> n;
	for (int n = 0; i < n; i++) {
		int k;
		cout << "Ivesk " << i + 1 << "semestro pazymi: ";
		cin >> k; paz.push_back(k);
	}
	cout << "Ivesk egzamino pazymi: "; cin >> egz;
	rezVid();
}
studentas::studentas(string v, string p, vector<int>pp, int e) {
	vard = v; pav = p; paz = pp; egz = e;
	rezVid();
}
studentas::studentas(const studentas& temp) {
	vard = tempt.vard; pav = temp.pav;
	paz = temp.paz; egz = temp.egz;
	rezVid();
}
studentas& studentas::operator=(const studentas& temp) {
	if (this == &temp) return *this;
	vard = temp.vard; pav = temp.pav;
	paz = temp.paz; egz = temp.egz;
	rezVid();
	return *this;
}
studentas::~studentas() {
	vard.clear(); pav.clear(); paz.clear();
	egz = 0; rez = 0;
}
void studentas::printas() {
	printf("|% - 10|%20s|", vard.c_str(), pav.c_str());
	for (auto& a : paz) printf("%3d|", a);
	printf("%10d|\n", egz);
}
void studentas::printasRez() {
	printf("|%-10s|%20s|", vard.c_str(), pav.c_str());
	printf("%10f|\n", rez);
}
void studentas::rezVid() {
	float sum = std::accumulate(paz.begin(), paz.end(), 0.0);
	rez = sum / paz.size() * 0.4 + egz * 0.6;
}
void studentas::rezMed() {
	rez = mediana(paz) * 0.4 + egz * 0.6;
}
double studentas::mediana(vector<int>vec) {
	typedef vector<double>::size_type vecSize;
	vecSize size = vec.size();
	if (size == 0)
		throw std::donain_error("negalima skaicioti medianos tusciam vektoriui");
	sort(vec.begin(), vec.end());
	vecSize vid = size / 2;
	return size % 2 == 0 ? (vec[vid] + vec[vid - 1]) / 2.0 : vec[vid] / 1.0;
}