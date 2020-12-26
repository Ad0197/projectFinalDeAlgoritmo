#include <map>
#include <iostream>
#include "Poliza.h"
#include "Material.h"

using namespace std;

list<Poliza> POLIZA;

Poliza::Poliza()
{
    this->id = 0;
    this->inmuble = Inmueble();
    list<Deducible> lista;
    this->deducibles = lista;
}

Poliza::~Poliza() {}

void Poliza::imprimir()
{
    cout << "==========================================" << endl;
    cout << "ID: " << this->id << endl;
    cout << "Subtotal: " << this->subtotal() << endl;

    this->inmuble.imprimir();

    list<Deducible>::iterator itDe;

    for (itDe = this->deducibles.begin(); itDe != this->deducibles.end(); it++)
    {
        Deducible dedu = *itDe;
        dedu.imprimir();
    }
}

void Poliza::create()
{
    Poliza poliza;
    poliza.inmuble = this->inmuble;
    poliza.deducibles = this->deducibles;
    poliza.id = POLIZA.size();

    POLIZA.push_back(poliza);
}

void Poliza::findById(int id)
{
    map<int, Poliza> mapPol;
    list<Poliza>::iterator it;

    for (it = POLIZA.begin(); it != POLIZA.end(); it++)
    {
        Poliza poliza = *it;
        mapPol.insert(pair<int, Poliza>(poliza.id, poliza));
    }
    Poliza pol = mapPol[id];
    this->inmuble = pol.inmuble;
    this->deducibles = pol.deducibles;
    this->id = pol.id;
}

void Poliza::subtotal()
{
    float subTotal, base;
    Material material;
    list<Deducible>::iterator it;
    base = this->inmuble.base;
    material = this->inmuble.material;
    for (it = this->deducibles.begin(); it != this->deducibles.end(); it++)
    {
        Deducible deducibles = *it;
        subTotal = +base * deducibles.factorDedusible;
    }
    subTotal = +base * material.factorDeducible;

    return base - subTotal;
}

void registroPoliza()
{
    list<Deducible> listD;
    Inmueble inmueble;
    int idInmueble;
    int id, n;
    cout << "Introdusca el id del inmueble: ";
    cin >> id;
    inmueble.findById(id);
    cout << "Introdusca la cantidad de deducible a registrar: ";
    cin >> n;
    for (int i = 0, i < n; ++i)
    {
        Deducible deducible;
        cout << "Introdusca el id del deducible #" << i << ":";
        cin >> id;
        deducible.findById(id);
        listD.push_back(deducible);
    }
    Poliza poliza;
    poliza.inmuble = inmueble;
    poliza.deducibles = listD;
    poliza.create();
    poliza.imprimir();

    cout << "\n Escriba 0 y press enter para continuar." << endl;
    cin >> id;
}

void consultarPoliza()
{
    system("cls");
    int id;
    Poliza poliza;
    cout << "Introusca el id de la poliza: ";
    cin >> id;
    poliza.findById(id);
    poliza.imprimir();
    cout << "\n Escriba 0 y press enter para continuar." << endl;
    cin >> id;
}
