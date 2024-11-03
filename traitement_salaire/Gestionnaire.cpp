#include "Gestionnaire.h"

Gestionnaire::Gestionnaire(string nom, double tauxHoraire, double heurestravaill, double salaireHebdomadaire):Employe(nom, tauxHoraire, heurestravaill),salaireHebdomadaire(20)
{
}

void  Gestionnaire::CalculerSalaire()
{
	//return Employe::CalculerSalaire() + salaireHebdomadaire * 4 ;
	Employe::CalculerSalaire();
	this->salaire = this->salaire + salaireHebdomadaire * 4;
}

void Gestionnaire::afficher()
{
	Employe::afficher();
	cout << " le salaire Hebdomadaire est ==> " << this->salaireHebdomadaire << endl;
}

Gestionnaire::~Gestionnaire()
{
	cout << "dctor Gestionnaire" << endl;
}
