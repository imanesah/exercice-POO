#pragma once
#include "Employe.h"
class Commercial :public Employe
{
private:
	double commission;
	int vente;
public:
	Commercial(string nom, double tauxHoraire, double heurestravaill,double commission ,int vente);
    void CalculerSalaire() 	override;
	void afficher() override ;
	~Commercial();

};

