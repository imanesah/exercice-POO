#include "Commercial.h"

Commercial::Commercial(string nom, double tauxHoraire, double heurestravaill,double commission, int vente) :Employe(nom,tauxHoraire,heurestravaill),commission(commission),vente(0)
{
}

void Commercial::CalculerSalaire() 
{
	//return Employe::CalculerSalaire() + commission * vente ;

	Employe::CalculerSalaire(); 
	
	this->salaire = this->salaire + commission * vente;
	
}

void Commercial::afficher()
{
	Employe::afficher();
	cout << "commision ==> " << this->commission << " ; nombre des ventes  ==>" << this->vente << endl;
}

Commercial::~Commercial()
{
	cout << "dctor Commercial " << endl;
}
