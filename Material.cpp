#include "Material.h"

using namespace std;

list<Material> MATERIAL;

Material::Material()
{
    id = 0;
    factorDeducible = 0;
    nombreMaterial = "";
}

Material::Material(string nombre, float factor, int idNo)
{
    id = idNo;
    nombreMaterial = nombre;
    factorDeducible = factor;
}

Material::~Material()
{
}

void Material::imprimir()
{
    cout << "======================================================" << endl
         << "ID: " << this->id << endl
         << "Nombre del Material: " << this->nombreMaterial << endl
         << "Factor Deducible: " << this->factorDeducible << endl;
}

list<Material> Material::getAll()
{

    return MATERIAL;
}

bool Material::create()
{
    Material material;
    material.factorDeducible = this->factorDeducible;
    material.nombreMaterial = this->nombreMaterial;
    material.id = MATERIAL.size();

    MATERIAL.push_back(material);

    return true;
}

void Material::findById(int id)
{
    list<Material>::iterator it;
    map<int, Material> mapMat;

    for (it = MATERIAL.begin(); it != MATERIAL.end(); it++)
    {
        Material material = *it;
        mapMat.insert(pair<int, Material>(material.id, material));
    }

    Material mat = mapMat[id];
    this->id = mat.id;
    this->nombreMaterial = mat.nombreMaterial;
    this->factorDeducible = mat.factorDeducible;
}

void registrarMaterial()
{
    system("cls");
    string nombre;
    float factor;
    Material material;
    cout << "Nombre del Material: ";
    cin >> nombre;
    cout << "\nFactor del Material (ex: 0.01) : ";
    cin >> factor;
    material.nombreMaterial = nombre;
    material.factorDeducible = factor;
    material.create();
    material.imprimir();
}

void consultarMaterial()
{
    system("cls");
    int id;
    cout << "Entre el id del material: ";
    cin >> id;
    Material material;
    material.findById(id);
    material.imprimir();
    cout << "\n Escriba 0 y press enter para continuar." << endl;
    cin >> id;
}