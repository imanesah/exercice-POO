#include "Entreprice.h"

Entreprice::Entreprice() : nbremploye(0),salaire_total(0) {
    // Initialisation du tableau de pointeurs à nullptr
    for (int i = 0; i < max; ++i) {
        tab[i] = nullptr;
    }

}

void Entreprice::ajouter_Employe(Employe* employe)
{
    
   
    if (nbremploye < max) {
        
    
            
            tab[nbremploye++] = employe;
            this->salaire_total = *employe + this->salaire_total;
            
        }
        else {
            
            cout << "Erreur : Nombre maximum d'employés atteint." << endl;
        }
    
}

void Entreprice::affihcer_employe()
{
    for (int i = 0; i < nbremploye; ++i) {
          tab[i]->afficher()   ;
    }
    cout << "total " << this->salaire_total << endl;
}

Entreprice::~Entreprice()
{
    cout << "dctor Entreprise" << endl;
}

