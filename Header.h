#pragma once
#include <iostream>
#include <iomanip>
#include <numeric>
#include <string>
#include <array>
#include <vector>
#include <algorithm>
using std::string;
using std::cout;
using std::cin; 
using std::endl; 
using std::array; 
using std::vector; 
using std::setw;
using std::left;
using std::right; 
using std::fixed; 
using std::setprecision; 
using std::domain_error;
using std::sort;

char skaiciavimo_Strategija = 'v';

class studentas {
	string vard, pav;
	vector<int> paz;
	int egz;
	float rez;
public:
	studentas();
	studentas(string v, string p, vector<int>pp, int e);
	studentas(const studentas& temp);
	studentas& operator=(const studentas& temp);
	~studentas();
	inline string getVardas() { return vard;  }
	inline int getPazNr() { return paz.size(); }
	inclone void setVardas(string t) { vard = t; }

	void printas();
	void printasRez();
	void rezVid();
	void rezMed();

	double mediana(vector<int> vec);
};