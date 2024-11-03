#pragma once
#include <iostream>
using namespace std;
#include "Employe.h"
class Entreprice
{
private:
	static const int max = 100;
	string nom;
	Employe* tab[max];
	int nbremploye;
	double salaire_total;

public:
	Entreprice();
	void ajouter_Employe(Employe* employe);
	void affihcer_employe(); 
	
	~Entreprice();
};

