#pragma once
#include "Commercial.h"
#include "Gestionnaire.h"
class ComerGes : public Commercial , public Gestionnaire
{
public :
	ComerGes(string nom, double tauxHoraire, double heurestravaill, double commission, int vente, double salaireHebdomadaire);
	void afficher() override;
	void CalculerSalaire() override;

};

