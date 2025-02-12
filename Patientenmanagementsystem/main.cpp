#include "Person.h"
#include "Patient.h"


int main() {

	Patient A(10, "Larry", "jumbo", "Hauptstr");
	A.getData();
	A.ausgabePID();
	Patient B(10, "marie", "hule", "Hauptstr.283");
	B.getData();
	B.ausgabePID();
	
}