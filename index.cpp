void mostrarMenu();
void salir();
void Regipoli();
void Regdeduc();
void conspoliz();
void consdeduc();
#include <iostream>

using namespace std;

int main()
{
    char option;
    while (option != '-1')
    {
        mostrarMenu();
        cin >> option;
        if (option == '0')
            Regipoli();
        if (option == '1')
            Regdeduc();
        if (option == '2')
            conspoliz();
        if (option == '3')
            consdeduc();
        if (option == '-1')
            salir();
        system("cls");
    }
    return -1;
}

void mostrarMenu()
{
    cout << "-----Menu Principal-----" << endl;
    cout << "[0]----Registrar Poliza" << endl;
    cout << "[1]----Registrar Deducibles o Materiales" << endl;
    cout << "[2]----Consultar Poliza" << endl;
    cout << "[3]----Consultar Deducibles o Materuales" << endl;
    cout << "[-1] Salir" << endl;
    cout << "Elija la opcion deseada" << endl;
}

void Regipoli()
{
    cout << "para regirtrar poliza";
    system(0);
    char option;
    cin >> option;
}

void Regdeduc()
{
    cout << "para registro de deducible";
    system(0);
    char option;
    cin >> option;
}
void conspoliz()
{
    cout << "para consultar las polizas";
    system(0);
    char option;
    cin >> option;
}
void consdeduc()
{
    cout << "para consultas de deducible";
    system(0);
    char option;
    cin >> option;
}
void salir()
{
    cout << "Saliendo de la aplicacion";
    system(0);
}
