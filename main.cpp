#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/* Integrantes: José Vásquez, Luis Espinoza, Adrian Aguirre, Jesus Arrieche */

/*
Realize un programa que calculé el total de compras de un supermercado 
los datos de entradas son: razón social cliente,rif/cédula.
Calcular la cantidad de compras el mayor y detal
Calcular el monto a pagar por cada cliente 
Los productos son:
Refresco 10$ detal al mayor 5$ al mayor es a partir de 6 unidades, 
malta 12$ detal mayor 7$ al mayor es a partir de 6 unidades
*/

int main() {
  int opcion;
  do {
    // Paso 1 Declarar variables
    string nombreEmpresa;
    string rifCedula;
    int cantidadRefresco;
    int cantidadMalta;
    double precioRefresco;
    double precioMalta;
    double montoTotalCompra;

    // Paso 2 Obtener informacin del cliente
    cout << "Ingrese el nombre de la empresa del cliente:\n ";
    getline(cin, nombreEmpresa);
    cout << "Ingrese el RIF o cedula de identidad del cliente:\n ";
    cin >> rifCedula;

    // Paso 3 Obtener cantidades de productos comprados
    cout << "Ingrese la cantidad de refrescos comprados:\n ";
    cin >> cantidadRefresco;
    cout << "Ingrese la cantidad de maltas compradas:\n ";
    cin >> cantidadMalta;

    // Paso 4 Calcular precios por producto
    if (cantidadRefresco >= 6) {
      precioRefresco = cantidadRefresco * 5.0; // al mayor
      cout << "Refresco al mayor:\n " << cantidadRefresco << " unidades x $5.00 = $" << precioRefresco << endl;
    } else {
      precioRefresco = cantidadRefresco * 10.0; // al detal
      cout << "Refresco al detal:\n " << cantidadRefresco << " unidades x $10.00 = $" << precioRefresco << endl;
    }

    if (cantidadMalta >= 6) {
      precioMalta = cantidadMalta * 7.0; // al mayor
      cout << "Malta al mayor:\n " << cantidadMalta << " unidades x $7.00 = $" << precioMalta << endl;
    } else {
      precioMalta = cantidadMalta * 12.0; // al detal
      cout << "Malta al detal:\n " << cantidadMalta << " unidades x $12.00 = $" << precioMalta << endl;
    }

    // Paso 5 Calcular monto total de la compra
    montoTotalCompra = precioRefresco + precioMalta;

    // Paso 6 Mostrar resumen de compra
    cout << "\nResumen de compra para " << nombreEmpresa << " (" << rifCedula << "):" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "Monto Total de la Compra: $" << montoTotalCompra << endl;

    // Preguntar si desea realizar otra compra
    cout << "Desea realizar otra compra? (1 = S, 0 = N): \n";
    cin >> opcion;
  } while (opcion == 1);

  return 0;
}
