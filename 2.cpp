//Nombre: NOMBRE
//TP Nº
//EJ Nº
//Comentarios:

#include <iostream>
using namespace std;

int main (void){
  int nroVenta, dia, importe = 0, cont = 0;
  int recaudacionMax;
  int diaRecaudacionMax;

  int ventas[30] = {};

  cout << "Indique el numero de venta: ";
  cin >> nroVenta;


  while (nroVenta != 0){
  cout << "Indique el dia: ";
  cin >> dia;
  cout << "Indique el importe: ";
  cin >> importe;

  ventas[dia-1] += importe;

  cout << "Indique el numero de venta: ";
  cin >> nroVenta;
  }

  recaudacionMax = ventas[0];

  for (int i = 0; i < sizeof(ventas) / sizeof(int); i++)
  {

    if(ventas[i] > 0){
        cout << "El dia " << i + 1 << " recaudo un total de " << ventas[i] << endl;
    }

    if(ventas[i] > recaudacionMax){
      recaudacionMax = ventas[i];
      diaRecaudacionMax = i + 1;
    }
  }

 cout << endl << "La recaudacion máxima fue: " << recaudacionMax << " y el dia que se realizo fue el " << diaRecaudacionMax;

  return 0;
}