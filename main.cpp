#include <iostream>
#include <string>
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
  // Paso 1 Declarar variables
  string nombreEmpresa;
  string rifCedula;
  int cantidadRefrescoDetal;
  int cantidadRefrescoMayor;
  int cantidadMaltaDetal;
  int cantidadMaltaMayor;
  int totalRefresco;
  int mayorRefresco;
  int totalMalta;
  int mayorMalta;
  double precioRefrescoDetal;
  double precioRefrescoMayor;
  double precioMaltaDetal;
  double precioMaltaMayor;
  double totalPrecioRefresco;
  double totalPrecioMalta;
  double montoTotalCompra;

  // Paso 2 Obtener información del cliente
  cout << "Ingrese el nombre de la empresa del cliente: ";
  getline(cin, nombreEmpresa);
  cout << "Ingrese el RIF o cédula de identidad del cliente: ";
  cin >> rifCedula;

  // Paso 3 Obtener cantidades de productos comprados
  cout << "Ingrese la cantidad de refrescos comprados al detal: ";
  cin >> cantidadRefrescoDetal;
  cout << "Ingrese la cantidad de refrescos comprados al mayor: ";
  cin >> cantidadRefrescoMayor;
  cout << "Ingrese la cantidad de maltas compradas al detal: ";
  cin >> cantidadMaltaDetal;
  cout << "Ingrese la cantidad de maltas compradas al mayor: ";
  cin >> cantidadMaltaMayor;

  // Paso 4 Calcular cantidades totales y máximas
  totalRefresco = cantidadRefrescoDetal + cantidadRefrescoMayor;
  mayorRefresco = max(cantidadRefrescoDetal, cantidadRefrescoMayor);
  totalMalta = cantidadMaltaDetal + cantidadMaltaMayor;
  mayorMalta = max(cantidadMaltaDetal, cantidadMaltaMayor);

  // Paso 5 Calcular precios por producto basado en cantidades
  precioRefrescoDetal = cantidadRefrescoDetal * 10;
  if (cantidadRefrescoMayor >= 6) {
    precioRefrescoMayor = cantidadRefrescoMayor * 5;
  } else {
    precioRefrescoMayor = cantidadRefrescoMayor * 10;
  }
  precioMaltaDetal = cantidadMaltaDetal * 12;
  if (cantidadMaltaMayor >= 6) {
    precioMaltaMayor = cantidadMaltaMayor * 7;
  } else {
    precioMaltaMayor = cantidadMaltaMayor * 12;
  }

  // Paso 6 Calcular precios totales por producto
  totalPrecioRefresco = precioRefrescoDetal + precioRefrescoMayor;
  totalPrecioMalta = precioMaltaDetal + precioMaltaMayor;

  // Paso 7 Calcular monto total de la compra
  montoTotalCompra = totalPrecioRefresco + totalPrecioMalta;

  // Paso 8 Mostrar resumen de compra
  cout << "\nResumen de compra para " << nombreEmpresa << " (" << rifCedula << "):" << endl;
  cout << "--------------------------------------------------" << endl;
  cout << "Producto | Cantidad (Detal/Mayor) | Precio" << endl;
  cout << "--------|----------------------------|-------" << endl;
  cout << "Refresco | " << cantidadRefrescoDetal << " / " << cantidadRefrescoMayor << " | $" << totalPrecioRefresco << endl;
  cout << "Malta    | " << cantidadMaltaDetal << " / " << cantidadMaltaMayor << " | $" << totalPrecioMalta << endl;
  cout << "--------------------------------------------------" << endl;
  cout << "Monto Total de la Compra: $" << montoTotalCompra << endl;

  return 0;
}
