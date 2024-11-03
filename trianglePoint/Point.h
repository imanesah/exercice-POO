#pragma once
using namespace std;
#include "iostream"
class Point
{
private:
	double X;
	double Y;
public:
	Point();
	void saisie();
	void afficher();
	void translater(double X, double Y);
	void echelle(double factX, double factY);
	double distance(Point& );


};

