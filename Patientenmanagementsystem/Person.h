#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	int alter;
	string Name;
	string Vname;
	string Adresse;
public:
	Person(int alter, string Name, string Vname, string Adresse) {
		this->alter = alter;
		this->Adresse = Adresse;
		this->Vname = Vname; 
		this->Name = Name; 
	}
	void getName(string Name) { Name = this->Name; }
	void getVname(string Vmame) { Vname = this->Vname; }
	void getAdresse(string Adresse) { Adresse = this->Adresse; }
	void getAlter(string alter) { alter =this->alter; }
	void ausgabeName() { cout << this->Name << endl; }
	void ausgabeVname() { cout << this->Vname << endl; }
	void ausgabeAdresse() { cout << this->Adresse << endl; }
	void ausgabeAlter() { cout << this->alter << endl; }
};