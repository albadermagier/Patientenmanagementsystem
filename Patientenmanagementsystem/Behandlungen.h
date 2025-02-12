#pragma once
#include <string>
using namespace std;

class Behandlungen {
private:
	string Datum;
	string Grund;
	string Medikament;

public:

	Behandlungen(string Datum, string Grund, string Medikament) : Datum(Datum), Grund(Grund), Medikament(Medikament){
	
	}

	void getDatum(string* Datum) { *Datum= this->Datum; }
	void getGrund(string* Grund) { *Grund = this->Grund; }
	void getMedikament(string* Medikament) { *Medikament = this->Medikament; }
	void getBehandlungen();


};