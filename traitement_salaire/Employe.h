#pragma once
#include <iostream>
using namespace std;
class Employe
{
private:
	string nom;
	double tauxHoraire  ;
	int heurestravaill;
protected:
	double salaire;
public :
	Employe(string nom, double tauxHoraire, int  heurestravaill );
	virtual void CalculerSalaire() ;
	virtual void afficher();
	double operator+(double e);
	~Employe();

};

