#pragma once
using namespace std;
#include "iostream"
#include "Point.h"
class Triangle
{
private:
	Point *A;
	Point *B;
	Point *C;
public :
	Triangle();
	void saisie();
	void afficher();
	void translater(double X, double Y);
	void echelle(double factX, double factY);
	void cote();
	bool isocele();
	bool equilateral();
	double perimetre();
};

