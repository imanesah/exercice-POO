#include "Pile.h"

Pile::Pile()
{
    this->sommet = -1;
    elem = new int[100];
  
}

void Pile::Empiler(int a)
{
   
    elem[++sommet] = a;
    cout << a << "empiler avec succ" << endl;
}

void Pile::depiler()
{
    elem[sommet--];
}

bool Pile::pile_vide()
{
    if (sommet == -1) return true;
    return false;
    
}

void Pile::afficher()
{
    
 
    for (int i = sommet; i >= 0; --i) {
       
       cout << elem[i] << endl;
    }
}

void Pile::afficher_sommet()
{
    cout << "sommet de la pile est  ==> " << elem[sommet] << endl;
}

Pile& Pile::inverse()
{
    Pile tmp;
    Pile h;
    while (!pile_vide()) {
        tmp.Empiler(elem[sommet]);
            depiler();
        
    }
   // cout << "le nv pile est : " << endl;
    //tmp.afficher();
    return tmp;
}

Pile::~Pile()
{
   // delete this ;
    cout << "dctor pile " << endl;
}
