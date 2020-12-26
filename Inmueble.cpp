#include "Inmueble.h"
#include "Material.h"

using namespace std;

list<Inmueble> INMUEBLES;

Inmueble::Inmueble()
{
    this->id = 0;
    this->base = 0;
    this->nombre = "";
    this->reemplazo = false;
    this->telefono = "";
    this->direccion = "";
    this->material = Material();
}

Inmueble::~Inmueble(){}

void Inmueble::create()
{
    Inmueble mat;
    mat.id = MATERIAL.size();
    mat.nombre = this->nombre;
    mat.reemplazo = this->reemplazo;
    mat.telefono = this->telefono;
    mat.material = this->material;
    mat.direccion = this->direccion;

    INMUEBLES.push_back(mat);
}

void Inmueble::findById(int id)
{
    list<Inmueble>::iterator it;
    map<int, Inmueble> mapMat;

    for (it = INMUEBLES.begin(); it != INMUEBLES.end(); it++)
    {
        Inmueble material = *it;
        mapMat.insert(pair<int, Inmueble>(material.id, material));
    }

    Inmueble mat = mapMat[id];
    this->id = mat.id;
    this->nombre = mat.nombre;
    this->direccion = mat.direccion;
    this->telefono = mat.telefono;
    this->material = mat.material;
    this->reemplazo = mat.reemplazo;
}

void Inmueble::imprimir()
{
    char flag;
    if (this->reemplazo)
    {
        flag = 'S';
    }
    else
    {
        flag = 'N';
    }
    cout << "==========================================="
         << "ID: " << this->id << endl
         << "Nombre de Inmueble: " << this->nombre << endl
         << "Direccion: " << this->direccion << endl
         << "Telefono: " << this->telefono << endl
         << "Valor de Base (DOP $): " << this->base << endl
         << "Reemplazo: " << flag << endl;
         this->material.imprimir();
}

void registrarInmueble()
{
    Inmueble inmueble = Inmueble();
    string nombre, direccion, telefono;
    float base;
    int id;
    char flag;
    system("cls");
    cout << "Nombre del Inmueble: ";
    cin >> nombre;
    cout << "Direccion del inmueble: ";
    cin >> direccion;
    cout << "Telefono del inmueble: ";
    cin >> telefono;
    cout << "Id Material de Construccion: ";
    cin >> id;
    inmueble.material.findById(id);
    cout << "Contiene reemplaza(Y / n): ";
    cin >> flag;
    if (flag == 'y' || flag == 'Y')
        inmueble.reemplazo = true;
    else
        inmueble.reemplazo = false;
    cout << "Valor de la base (DOP $): ";
    cin >> base;
    inmueble.nombre = nombre;
    inmueble.direccion = direccion;
    inmueble.telefono = telefono;
    inmueble.base = base;
    inmueble.create();
}

void consultarInmueble()
{
    Inmueble inmueble;
    int id;
    cout << "Por favor, entre el id del Inmueble: ";
    cin >> id;
    inmueble.findById(id);
    inmueble.imprimir();
    cout << "\n Escriba 0 y press enter para continuar." << endl;
    cin >> id;

}