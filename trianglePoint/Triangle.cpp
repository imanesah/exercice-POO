#include "Triangle.h"

Triangle::Triangle()
{
    A = new Point();
    B = new Point();
    C = new Point();

}

void Triangle::saisie()
{
    cout << "donner les coor de 1 eme point" << endl;
    A->saisie();
    cout << "donner les coor de 2 eme point" << endl;
    B->saisie();
    cout << "donner les coor de 3 eme point" << endl;
    C->saisie();
}

void Triangle::afficher()
{
    cout << "Les coordonnées du triangle sont :" << endl;
    
    cout << "Point 1 : ";
    A->afficher();
    cout << "Point 2 : ";
    B->afficher();
    cout << "Point 3 : ";
    C->afficher();
}

void Triangle::translater(double X, double Y)
{
   A->translater(X, Y);
    B->translater(X, Y);
    C->translater(X, Y);

}

void Triangle::echelle(double factX, double factY)
{
  A->echelle(factX, factY);
   B->echelle(factX, factY);
   C->echelle(factX, factY);
}

void Triangle::cote()
{
    
    cout << "langeur de cote1 =  "  << A->distance(*B) << endl;
    cout << "langeur de cote2 = " << A->distance(*C) << endl;
    cout << "langeur de cote3 = " << C->distance(*B) << endl;

}

bool Triangle::isocele()
{
    
    if (A->distance(*B) == A->distance(*C) || A->distance(*B) == C->distance(*B) || A->distance(*C) == C->distance(*B)) { return true;  }
    
    return false;
}

bool Triangle::equilateral()
{
    if (A->distance(*B) == A->distance(*C) && A->distance(*B) == C->distance(*B) || A->distance(*C) == C->distance(*B)) { return true; }

    return false;
}

double Triangle::perimetre()
{
   double a= A->distance(*B) + A->distance(*B) + C->distance(*B);
   return a;
}
