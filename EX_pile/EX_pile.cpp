// EX_pile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Pile.h"
int main()
{
    Pile* P;
    P = new Pile();
    P->Empiler(2);
    P->Empiler(5);
    P->Empiler(4);
    P->afficher();
    P->afficher_sommet();
    cout << "apres depilation" << endl; 
    P->depiler();
    P->afficher();
    cout << "le test si vide " << endl;
    cout << P->pile_vide()  << endl;
    P->afficher_sommet();
    cout << "inverssement " << endl;
    //P->inverse();
    Pile* A =new Pile();
    *A = P->inverse();
    A->afficher();
    delete P;
    delete A;


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
