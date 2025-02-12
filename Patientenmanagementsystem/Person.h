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
	Person(int alter, string Vname, string Name, string Adresse) {
		this->alter = alter;
		this->Adresse = Adresse;
		this->Vname = Vname; 
		this->Name = Name; 
	}
	void getName(string *Name) { *Name = this->Name; }
	void getVname(string *Vname) { *Vname = this->Vname; }
	void getAdresse(string *Adresse) { *Adresse = this->Adresse; }
	void getAlter(int *alter) { *alter = this->alter; }
	void ausgabeName() { cout <<"Name:" << this->Name << endl; }
	void ausgabeVname() { cout <<"Vorname:"<< this->Vname << endl; }
	void ausgabeAdresse() { cout <<"Adresse:"<< this->Adresse << endl; }
	void ausgabeAlter() { cout <<"alter:" << this->alter << endl; }

};