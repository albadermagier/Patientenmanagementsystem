#include "Behandlungen.h"
#include <iostream>

void Behandlungen::getBehandlungen()
{
	string Datum;
	getDatum(&Datum);
	string Grund;
	getGrund(&Grund);
	string Medikament;
	getMedikament(&Medikament);
	std::cout << "Datum: " << Datum << "\n" << "Grund: " << Grund << "\n" << "Medikament: " << Medikament << "\n";

}
