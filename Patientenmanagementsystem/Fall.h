#pragma once
#include "Behandlungen.h"
#include <vector>

class Fall {

private:
	vector <Behandlungen> behandlungen;
	int Fallnummer;

public:

	Fall(int Fallnummer) : Fallnummer(Fallnummer) {

	}

};