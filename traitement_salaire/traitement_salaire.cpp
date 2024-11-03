// traitement_salaire.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Employe.h"
#include "Entreprice.h"
#include "Gestionnaire.h"
#include "Commercial.h"

int main()
{
    // Création de quelques employés
    cout << "hna " << endl;
    Employe* e1 = new Employe("Ahmed", 20, 35);  
    cout << "hna2 " << endl;    // Employé de base
    e1->CalculerSalaire();
    cout << "hna3 " << endl;
    Gestionnaire* g1 = new Gestionnaire("Sara", 25, 40, 200);
    cout << "hna4 " << endl;// Gestionnaire avec un salaire hebdomadaire fixe
    g1->CalculerSalaire();
    cout << "hna5 " << endl;
    Commercial* c1 = new Commercial("Ali", 18, 30, 10, 50);
    cout << "hna6 " << endl;// Commercial avec commission et ventes
    c1->CalculerSalaire();
    cout << "hna7 " << endl;
    // Création de l'entreprise et ajout des employés
    Entreprice entreprise;
    cout << "hna8 " << endl;
    entreprise.ajouter_Employe(e1);
    cout << "hna9 " << endl;
    
    cout << "hna210 " << endl;
    entreprise.ajouter_Employe(c1);
    cout << "hna11 " << endl;
    entreprise.ajouter_Employe(g1);
    // Affichage des informations de tous les employés
    cout << "Liste des employés dans l'entreprise :" << endl;
    cout << "hna12 " << endl;
    entreprise.affihcer_employe();
    cout << "hna13 " << endl;
   
    //Libérer la mémoire
    delete e1;
    delete g1;
    delete c1;
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
