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
    cout << "{ 'id': " << this->id << ", 'nombreMaterial': " << this->nombreMaterial << ", 'factorDeducible': " << this->factorDeducible << " }" << endl;
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
