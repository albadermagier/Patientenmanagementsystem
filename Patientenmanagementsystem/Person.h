#pragma once
#include <iostream>

class Person {
private:
	int alter;
	string Name;
	string Vname;
	string Adresse;
public:
	void getName(string Name) { Name = this->Name; }
	void getVname(string Vmame) { Vname = this->Vname; }
	void getAdresse(string Adresse) { Adresse = this->Adresse; }
	void getAlter(string alter) { alter =this->alter; }
};