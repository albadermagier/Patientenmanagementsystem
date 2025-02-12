#include "Patient.h"

Patient::Patient():Person(0,"","","")
{
	
}

Patient::Patient(int alter, string Vname, string Name, string Adresse):Person(alter,Vname,Name,Adresse)
{
	CreatePID();
}

void Patient::CreatePID()
{
	static int pid = 1000;
	this->pid = pid;
	pid++;
}

void Patient::getData()
{
	
	string name;
	Patient::getName(&name);
	string vname;
	Patient::getVname(&vname);
	std::cout << "Name:" << vname <<" "<< name << endl;
	int a = 0;
	Patient::getAlter(&a);
	std::cout << "Alter:" << a << endl;
	string adr;
	Patient::getAdresse(&adr);
	std::cout << "Adresse:" << adr << endl;
	
}
