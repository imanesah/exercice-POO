// TP1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Point.h"
#include "Triangle.h"

int main()
{
    // Test de la classe Point
    // Point p1;
   
    //cout << "Saisie du point p1:" << endl;
    //p1.saisie();
   // cout << "Saisie du point p2:" << endl;
    //p2.saisie();

    //cout << "Coordonnées du point p1 : ";
    //p1.afficher();
   // cout << endl;

    //cout << "Coordonnées du point p2 : ";
   // p2.afficher();
   // cout << endl;

   /* cout << "Distance entre p1 et p2 : " << p1.distance(p2) << endl;
    cout << "translation" << endl;
    p1.translater(3, 3);
    p1.afficher();*/ 

     //Test de la classe Triangle
   Triangle triangle;
   
    cout << "\nSaisie des sommets du triangle :" << endl;
    triangle.saisie();

    cout << "\nAffichage des sommets du triangle : " << endl;
    triangle.afficher();

   cout << "\nLongueur des côtés du triangle : " << endl;
   triangle.cote();
   cout << " ja hna " << endl;
 
   cout << triangle.isocele() << endl;
   //delete triangle ;
   

   

    // Test de translation et de mise à l'échelle
    /*cout << "\nTranslation du triangle de (2, 3)..." << endl;
    triangle.translater(2, 3);
    triangle.afficher();

    cout << "\nChangement d'échelle du triangle par les facteurs (0.5, 0.5)..." << endl;
    triangle.echelle(0.5, 0.5);
    triangle.afficher();*/
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
