#pragma once
#include "Person.h"

class Patient: public Person{
private:
	int ICD;
	int Fallnummer;
};