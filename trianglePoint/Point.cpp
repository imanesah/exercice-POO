#include "Point.h"
#include <cmath>

Point::Point()
{
    this->X = 0;
    this->Y = 0;

}

void Point::saisie()
{
    double X, Y;
    cout << "donner le X : "; cin >>  X;
    cout << "donner le Y  : "; cin >>  Y;
   
    this->X = X;
    this->Y = Y;
   
   
}   

void Point::afficher()
{

    cout << "le facteur X est : " << this->X << endl;
    cout << "le facteur Y est :  " << this->Y << endl;
}

void Point::translater(double X, double Y)
{
    this->X = this->X +X;
    this->Y = this->Y+ Y;
}

void Point::echelle(double factX, double factY)
{
    this->X = (this->X) * factX;
    this->Y = (this->Y) * factY;
    
}

double Point::distance(Point& p)
{
    double a, b;
    a = pow((p.X - this->X), 2);
    b = pow((p.Y - this->Y), 2);
    return sqrt(a + b);
}
