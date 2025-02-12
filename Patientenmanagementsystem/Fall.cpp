#include "Fall.h"

void Fall::BehandlungHinzufuegen()
{
    
    string Datum, Grund, Medikament;
    std::cin >> Datum >> Grund >> Medikament;
    Behandlungen* behandlung = new Behandlungen(Datum, Grund, Medikament);
    behandlungen.push_back(behandlung);

}

void Fall::ausgabeBehandlungen()
{
    if(!behandlungen.empty())
    {
    for (size_t i = 0; i < behandlungen.size(); i++) 
        {
       std::cout << "Behandlung:" << i+1 << endl;
       behandlungen[i]->getBehandlungen();
       std::cout << behandlungen[i] << endl;
        }
    }
    else
    {
        std::cout << "Keine Behandlungen vorhanden" << endl;
    }
}

Fall::~Fall() // Löschen der Pointer und leeren des Speichers nach Beendigung von Programm
{
    if(!behandlungen.empty())
    {
    for(size_t i = 0; i < behandlungen.size(); i++) // TODO einbauen von Test, ob Speicherblöcke freigegeben wurden (Prüfung wegen SPeicherlecks)
        {
         delete behandlungen[i];
         behandlungen[i] = nullptr;
        }
        behandlungen.clear();
    if (!behandlungen.empty()) 
        {
       
        std::cerr << "Vektor ist nicht leer" << endl;

        }
   
    
    }
}
