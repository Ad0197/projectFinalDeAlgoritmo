#include "Deducible.h"
#include <list>
#include <map>

using namespace std;

list<Deducible> DEDUCIBLES;

Deducible::Deducible()
{
    this->idDeducible = 0;
    this->nombreDeducible = "";
    this->factorDedusible = 0;
}

Deducible::~Deducible()
{
}

void Deducible::imprimir()
{
    cout << "===================================" << endl;
    cout << "ID: " << this->idDeducible << endl;
    cout << "Nombre del deducible: " << this->nombreDeducible << endl;
    cout << "Factor del deducible: " << this->factorDedusible << endl;
}

void Deducible::create()
{
    Deducible deducible;
    deducible.idDeducible = DEDUCIBLES.size();
    deducible.nombreDeducible = this->nombreDeducible;
    deducible.factorDedusible = this->factorDedusible;
    DEDUCIBLES.push_back(deducible);
}

void Deducible::findById(int id)
{

    map<int, Deducible> mapDeb;
    list<Deducible>::iterator it;

    for (it = DEDUCIBLES.begin(); it != DEDUCIBLES.end(); it++)
    {
        Deducible dedu = *it;
        mapDeb.insert(pair<int, Deducible>(dedu.idDeducible, dedu));
    }

    Deducible de = mapDeb[id];
    this->nombreDeducible = de.nombreDeducible;
    this->factorDedusible = de.factorDedusible;
    this->idDeducible = de.idDeducible;
}

void registrarDeducible()
{
    system("cls");
    string nombre;
    float factor;
    cout << "Nombre de deducible: ";
    cin >> nombre;
    cout << "Factor de deducible: ";
    cin >> factor;
    Deducible dedu;
    dedu.nombreDeducible = nombre;
    dedu.factorDedusible = factor;
    dedu.create();
}

void consultarDeducible()
{
    Deducible ded;
    system("cls");
    int id;
    cout << "Introduce el ID de deducible: ";
    cin >> id;
    ded.findById(id);
    ded.imprimir();

    cout << "\n Escriba 0 y press enter para continuar." << endl;
    cin >> id;
}