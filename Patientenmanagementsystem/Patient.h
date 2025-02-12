#pragma once
#include "Person.h"
#include <iostream>

class Patient: public Person{
private:
	int ICD = 0;     //Verschl�sselungs modifikation
	int Fnummer = 0; //Fallnummer
	int pid = 0;     // Patientenidentifikationsnummer
public:
	Patient();
	Patient(int alter, string Name, string Vname, string Adresse);
	void CreatePID();
	void ausgabePID() { std::cout <<"PID:"<< this->pid << endl; }
	void getData();
};