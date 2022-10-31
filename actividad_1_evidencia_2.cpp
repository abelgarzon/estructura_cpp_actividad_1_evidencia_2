#include <iostream>
#include <string>

using namespace std;

int main()
{
    int talla;
    int referencia;
    int valor_costo;
    int valor_venta;

    char disponible;
    string descripcion;

    cout << endl << "*** ADMINISTRAR VENTA DE ZAPATOS ***" << endl;

    cout<< "Favor digitar la referencia del calzado: ";
    cin>> referencia;

    cin.ignore();

    cout<< "Favor digite una descripcion del producto: ";
    getline(cin, descripcion);

    cout<< "Favor digite la talla del calzado: ";
    cin>> talla;

    cout << "Favor confirmar disponibilidad del calzado (S/n): ";
    cin >> disponible;

    cout<< "Favor digite la costo del calzado: ";
    cin>> valor_costo;

    cout<< "Favor digite la precio del calzado: ";
    cin>> valor_venta;

    cout << endl << "*** LOS DATOS INGRESADOS SON LOS SIGUIENTES ***" << endl;
    cout<< "REFERENCIA: "<< referencia << endl;
    cout<< "DESCRIPCION: "<< descripcion << endl;
    cout<< "TALLA: "<< talla <<endl;
    cout<< "DISPONIBILIDAD: "<< disponible << endl;
    cout<< "COSTO: "<< valor_costo << endl;
    cout<< "PRECIO: "<< valor_venta << endl;

    return 0;
}