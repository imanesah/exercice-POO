#include "ComerGes.h"

ComerGes::ComerGes(string nom, double tauxHoraire, double heurestravaill, double commission, int vente, double salaireHebdomadaire)
    : Employe(nom, tauxHoraire, heurestravaill), 
    Commercial(nom, tauxHoraire, heurestravaill, commission, vente), 
    Gestionnaire(nom, tauxHoraire, heurestravaill, salaireHebdomadaire)
{
}

void ComerGes::afficher()
{
    Commercial::afficher();
    Gestionnaire::afficher();
}

void ComerGes::CalculerSalaire()
{
    Commercial::CalculerSalaire();
    Gestionnaire::CalculerSalaire();
}
