#include "Employe.h"

Employe::Employe(string nom, double tauxHoraire, int heurestravaill) : nom(nom), tauxHoraire(10), heurestravaill(heurestravaill)
{
	
}

 void  Employe::CalculerSalaire() 
{
	 double s = tauxHoraire * heurestravaill;
	 this->salaire = s;
}

 void Employe::afficher()
 {
	 cout << "nom ==> " <<  this->nom << "  ; heur de travail  ==> " << this->heurestravaill << "  ; Taux houraire  ==> " << this->tauxHoraire << ";  Salaire ==> " << this->salaire << endl;
 }

 double Employe::operator+(double e)
 {
	 return  this->salaire + e;
 }

Employe::~Employe()
{
	cout << "dctor Employe" << endl;
}
