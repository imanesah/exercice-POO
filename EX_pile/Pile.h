#pragma once
#include "iostream"
using namespace std;
class Pile
{
private:
	int sommet;
	//int taille;
	int * elem;
	//int tab[100];
public:
	Pile();
	void Empiler(int a);
	void depiler();
	bool pile_vide();
	void afficher();
	void afficher_sommet();
	Pile& inverse();
	~Pile();
};

