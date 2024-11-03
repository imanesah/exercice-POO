#pragma once
#include "Employe.h"
class Gestionnaire :public Employe
{
private:
	double salaireHebdomadaire;
public:
	Gestionnaire(string nom, double tauxHoraire, double heurestravaill, double salaireHebdomadaire);
	void CalculerSalaire() override;
	void afficher() override;
	~Gestionnaire();
};

