#include "Person.h"
#include "Patient.h"
#include "Behandlungen.h"
#include "Fall.h"
int main() {

	/*Patient A(10, "Larry", "jumbo", "Hauptstr");
	A.getData();
	A.ausgabePID();
	Patient B(10, "marie", "hule", "Hauptstr.283");
	B.getData();
	B.ausgabePID();*/

	Behandlungen c("12.02", "Michael's fetter Arsch", "Ibuprofen");
	c.getBehandlungen();
	Fall A(3);
	for(int i = 0; i < 5; i++)
	{
		A.BehandlungHinzufuegen();
	}
	
	A.ausgabeBehandlungen();
}