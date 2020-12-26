#include <iostream>
#include <string>
#include <list>
#include <map>
#include "Material.cpp"
#include "Inmueble.cpp"

using namespace std;
void mostrarMenu();
void menuMateriales();
void menuInmueble();

void menuMateriales()
{
    int opt;
    while (opt != 0)
    {
        system("cls");
        cout << "[X]============MENU PRINCIPAL===========" << endl;
        cout << "[1]---Crear Materiales" << endl;
        cout << "[2]---Consultar Materiales" << endl;
        cout << "[0]---Regresar menu" << endl;
        cout << "Entre la opcion deseada: ";
        cin >> opt;
        if (opt == 1)
            registrarMaterial();
        else if (opt == 2)
            consultarMaterial();
        else if (opt == 0)
            mostrarMenu();
        system("cls");
    }
}
void mostrarMenu()
{
    int opt;
    while (opt != 0)
    {
        system("cls");
        cout << "[X]============MENU PRINCIPAL===========" << endl;
        cout << "[0]---SALIR" << endl;
        cout << "[1]---REGISTRO DE MATERIALE" << endl;
        cout << "[2]---REGISTRO DE INMUEBLE" << endl;
        cout << "[3]---REGISTRO DE POLIZA" << endl;
        cout << "Entre la opcion deseada: ";
        cin >> opt;
        if (opt == 1)
            menuMateriales();
        else if (opt == 2)
            menuInmueble();
        else if (opt == 3)
        {
        }
        else if (opt == 0)
            exit(0);
    }
}

void menuInmueble()
{
    int opt;
    while (opt != 0)
    {
        system("cls");
        cout << "[X]============MENU PRINCIPAL===========" << endl;
        cout << "[1]---Crear Inmueble" << endl;
        cout << "[2]---Consultar Inmueble" << endl;
        cout << "[0]---Regresar menu" << endl;
        cout << "Entre la opcion deseada: ";
        cin >> opt;
        if (opt == 1)
            registrarInmueble();
        else if (opt == 2)
            consultarInmueble();
        else if (opt == 0)
            mostrarMenu();
        system("cls");
    }
}