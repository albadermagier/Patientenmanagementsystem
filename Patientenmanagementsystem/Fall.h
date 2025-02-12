#pragma once
#include "Behandlungen.h"
#include <vector>
#include <iostream>


class Fall {

private:
	vector <Behandlungen*> behandlungen;
	int Fallnummer;

public:

	Fall(int Fallnummer) : Fallnummer(Fallnummer) {

	}
	void BehandlungHinzufuegen();
	void ausgabeBehandlungen();

	~Fall();
};